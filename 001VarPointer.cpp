//Manupulating var with pointer (print, swap)
#include <stdio.h>

void swapVar(int* a, int* b){
	// fix me
	int temp = *a;
	*a = *b;
	*b = temp;
	// fix me
}

void printVar(int a){
	// fix me
	printf("%d\n", a);
	// fix me
}

int main(){
	
	int a = 10;
	int b = 20;
	
	int* pa = &a;
	int* pb = &b;
	
	//print Var A, B
	printVar(a);
	printVar(b);
	
	//swap Var A ,B
	swapVar(pa, pb);
	
	//print Var A, B
	printVar(a);
	printVar(b);
	
	
	return 0;
} 
