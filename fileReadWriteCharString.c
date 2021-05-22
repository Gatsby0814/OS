#include <stdio.h>
int main(void)
{
	FILE* fp = fopen("test.txt", "w");
	if (!fp) {
		printf("Fail to open the file as the write mode.\n");
		return 0;
	}
	fputc('B', fp);
	fputc('a', fp);
	fputc('1', fp);
	fclose(fp);
	
	FILE* fpr = fopen("test.txt", "r");
	if (!fpr) {
		printf("Fail to open the file as the read mode.\n");
		return 0;
	}
	char c = 0;
	while ((c = fgetc(fpr)) != EOF)
	printf("%c", c);
	fclose(fpr);

	return 0;
}
