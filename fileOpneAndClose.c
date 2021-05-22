#include<stdio.h>

int main(){
	
	char* fileName = "text.txt";
	FILE* fp = NULL;
	fp = fopen(fileName, "w"); //to create a file
	
	if(fp==NULL){
		printf("failed to open %s file.\n", fileName);
		return 0;
	}
	
	printf("%s file is opened.\n", fileName);
	
	
	fclose(fp);
	printf("%s file is closed.\n", fileName);
	
	return 0;
}
