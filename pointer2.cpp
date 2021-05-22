#include<stdio.h>


void swapCallByVal(int a, int b){
	
	int temp = a;
	a = b;
	b = temp;
	
	printf("In swapCallByVal 	a :  %d b :  %d \n", a, b);
}

void swapCallByRef(int *a, int *b){
	
	int temp = *a;
	*a = *b;
	*b = temp;
	
	printf("In swapCallByRef 	a :  %d b :  %d \n", *a, *b);
	
}


int main(){
	int a = 20;
	int b = 30;
	int *pa = &a;
	int *pb = &b;
	
	printf("In main 		a :  %d b :  %d \n", a, b);
	swapCallByVal(a, b);
	printf("In main 		a :  %d b :  %d \n", a, b);
	
	
	printf("In main 		a :  %d b :  %d \n", a, b);
	swapCallByRef(pa, pb);
	printf("In main 		a :  %d b :  %d \n", a, b);
	
	return 0;
}
