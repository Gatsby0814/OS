#include<stdio.h>

int main(){
	FILE* fp = fopen("fseek.txt", "w");
	fputs("0123456789", fp);
	fclose(fp);
	
	fp = fopen("fseek.txt", "r");
	
	fseek(fp, 3, SEEK_SET);
	printf("fseek(fp, 3, SEEK_SET) = %c \n", fgetc(fp));
	
	fseek(fp, 0, SEEK_END);
	printf("fseek(fp, 0, SEEK_END) = %c \n", fgetc(fp));
	
	fseek(fp, -1, SEEK_END);
	printf("fseek(fp, -1, SEEK_END) = %c \n", fgetc(fp));
	
	fseek(fp, -2, SEEK_END);
	printf("fseek(fp, -2, SEEK_END) = %c \n", fgetc(fp));
	fclose(fp);
	
	return 0;
	
}
