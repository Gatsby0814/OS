#include<stdio.h>

int main(){
	
	unsigned int a = 0x00ABCDEF; //int -> 4byte  0x ->
	printf("a : %x\n", a);
	 
	unsigned char *p = (unsigned char*)&a;
	printf("*p : %x\n", *p);
	
	if (*p == 0xef) //why ef ?? (2 char ??)
	printf("My system uses little-endian!\n");
	else
	printf("My system uses big-endian!\n");
	
	return 0;
}
