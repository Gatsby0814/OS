#include <stdio.h>
int  main() {
	

printf("\n\n\n");
printf("----------- pointer data type size -----------");
printf("\n\n\n");	
char* pChar = (char*)100;
int* pInt = (int*)100;
double* pDouble = (double*)100;

printf("sizeof(char): %d, pChar: %d, pChar+1: %d, pChar-1: %d\n"
,sizeof(char), pChar, pChar + 1, pChar - 1);

printf("sizeof(int): %d, pInt: %d, pInt+1: %d, pInt-1: %d\n"
, sizeof(int), pInt, pInt + 1, pInt - 1);

printf("sizeof(double): %d, pDouble: %d, pDouble+1: %d, pDouble-1: %d\n"
, sizeof(double), pDouble, pDouble + 1, pDouble - 1);


printf("\n\n\n");
printf("----------- handling array index with pointer -----------");
printf("\n\n\n");

int a[5] = { 40, 2, 3, 4, 5 };
int* pArr = a;

printf("*(a+1)=%d\n", *(a+1));
printf("*(pArr+1)=%d\n\n", *(pArr + 1));
printf("value of 'a':\t%p\n", a);
printf("address of ¡®a[1]':\t%p\n\n", &a[1]);
printf("value of 'pArr':\t%p\n", pArr);
printf("value of 'pArr+1':\t%p\n\n", pArr+1);

for (int i = 0; i < 5; i++) {
printf("(pArr:%p), *pArr = %d\n", pArr, *pArr);
pArr++;
}


pArr = a;
printf("\n\n\n");
printf("----------- *(pArr+1) vs (*pArr+1) -----------");
printf("\n\n\n");
printf("*(pArr+3)=%d\n", *(pArr + 3));
printf("(*pArr+2)=%d\n", (*pArr + 2));


return 0;

}


//char -> 1 byte int -> 4 byte double -> 8 byte
