//Manupulating var with pointer (print, swap)
#include <stdio.h>

//check the validity of pointer!!(prevent the error)
int swapVar(int* a, int* b){
	// fix me
	if(a!=NULL && b!=NULL){
		int temp = *a;
		*a = *b;
		*b = temp;
		return 0;
	}
	else{
		printf("Null pointer Error");
		return -1;
	}
	// fix me
}

void printVar(int *a){
	// fix me
	printf("%d\n", *a);
	// fix me
}

int main(){
	
	int a = 10;
	int b = 20;
	
	int* pa = &a;
	int* pb = &b;
	
	//print Var A, B
	printVar(pa);
	printVar(pb);
	
	//swap Var A ,B
	swapVar(pa, pb);
	
	//print Var A, B
	printVar(pa);
	printVar(pb);
	
	
	return 0;
} 
