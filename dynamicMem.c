#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1024
#define MAXNAME 64
int heapUsage = 0;

typedef struct {
	int age;
	float score;
	char *name;
}student;

int setStudent(student* _dst){
	_dst->age = rand()%100;
	_dst->score = rand()%100;
	
	int nameLen = rand()%MAXNAME;
	
//	//static memory
//	for (int i=0; i<nameLen; i++){
//		_dst->name[i] = 'a'+rand()%26;
//	}
	
	//dynamic memory
	_dst->name = (char*)calloc(nameLen, sizeof(char));//to avoid to access at garbage value, use calloc!
	heapUsage+= sizeof(char)*nameLen;
	for (int i=0; i<nameLen; i++){
		_dst->name[i] = 'a'+rand()%26;
	}
}

int main(){
	int numStudent = 0;
	
	printf("How many student? ");
	scanf("%d", &numStudent);

//	//static memory
//	student students[N] = {0}; //N=1024
//	printf("size of students array = %d bytes\n", sizeof(student) * N);
//	
	
	//dynamic memory
	student* students = (student*)malloc(sizeof(student)*numStudent); 	// Q. malloc, memset VS calloc
	memset(students, 0, sizeof(student)*numStudent);					// A. both are for avoiding garbage value problem -> initialize memory routine
	heapUsage += sizeof(student)*numStudent;	
	
	
	//set student
	for (int i = 0; i < numStudent; i++)
	setStudent(&students[i]);
	
	//calculate avg score
	float avg = 0;
	for (int i = 0; i < numStudent; i++)
	avg += students[i].score;
	avg /= numStudent;
	
	printf("Average score = %.2f\n", avg);
	
	
	// release name memory
	for(int i=0; i<numStudent; i++){
		if(students->name){					//incase not 0
			free(students->name);			// Q. why not access studnet index ??
			students->name=NULL;
		}
	}
	
	
	//free student memory
	if(students){
		free(students);						//free memory
		students = NULL; 					//avoid dangling point
	}
	
	printf("heap memory usage = %d bytes\n", heapUsage);

	
	return 0;
}
