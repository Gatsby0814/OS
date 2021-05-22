#include<stdio.h>
#include<stdlib.h>
#define BUF_SIZE 255

int main(){
	FILE *fpsrc = NULL;
	FILE *fpdst = NULL;
	char fileName[BUF_SIZE] = { 0 }, buf[BUF_SIZE] = { 0 };
	
	//open the source file with reading mode
	printf("Input file name: "); 
	scanf("%s", fileName);
	
	/*fixme*/
	if((fpsrc = fopen(fileName, "r"))==NULL){
		fprintf(stderr, "Failed to open the file '%s'\n", fileName);
		exit(-1);
	}
	/*fixme*/
	
	
	
	//open the destination file with writing mode
	printf("Input file name: "); 
	scanf("%s", fileName);
	
	/*fixme*/
	if((fpdst = fopen(fileName, "w"))==NULL){
		fprintf(stderr, "Failed to open the file '%s'\n", fileName);
		exit(-1);
	}
	/*fixme*/
	
	
	//file copy
	while(fgets(buf, 255, fpsrc) != NULL){
		fputs(buf, fpdst);
	}
	
	fclose(fpsrc);
	fclose(fpdst);
	
	return 0;
}
