#pragma warning (disable:4996)
#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define BUFFER_SIZE 100
#define MAX 10000

int count_words(char buffer[]);
void Remove_line_space(char* buffer);
int words[MAX];
int n = 0;

int main(){
	
	char buffer[BUFFER_SIZE];
	FILE *fp1 = fopen("inputText.txt","r");
	FILE *fp2 = fopen("outputText.txt", "w");
	
	while(!feof(fp1)){
		fgets(buffer, BUFFER_SIZE, fp1);
		Remove_line_space(buffer);
		int nwords = count_words(buffer);
		printf("%s %d :%d\n", buffer, nwords, strlen(buffer));
		fprintf(fp2,"%s %d :%d\n", buffer, nwords, strlen(buffer)); //fprintf =>put in file
	}
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}

int count_words(char buffer[]){
	int count = 0;
	for(int i =0; i<strlen(buffer); i++){
		if(!isspace(buffer[i]) && (i==0||isspace(buffer[i-1]))) {
			count++;
		}
	}
	return count;
}

void Remove_line_space(char* buffer){
	int i = 0;
	while(buffer[i]!='\0'){
		i++;
	}
	buffer[i-1]='\0';
}
