#include<stdio.h>

int main(){
	
	char* fileName = "text.txt";
	
	//make file pointer, initialize file with wirte mode!
	FILE* fp = NULL;
	fp = fopen(fileName, "w");
	
	
	//exception 
	if(fp == NULL){
		printf("failed to open file %s.\n", fileName);
		return 0;
	}
	
	printf("Success to open the file '%s'\n", fileName);
	
	
	
	//put char in the file 
	fputc('A', fp);
	fputc('B', fp);
	fputc('1', fp);
	
	fclose(fp);
	
	fp = fopen(fileName,"r");
	//print out char in the file
	char c = 0;
	while((c=fgetc(fp))!= EOF){
		printf("%c", c);
	}
	
	fclose(fp);
	
	printf("Success to close the file '%s'\n", fileName);
	
	
	return 0;
}
