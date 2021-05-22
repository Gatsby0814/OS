//Manupulating arr with pointer (print, swap)
#include<stdio.h>

void printArr(int* a, int len){
	// fix me
	int* address = a;
	
	for(int i = 0; i<len; i++){
		printf("%d\t", *address);
		address++;
	}
	printf("\n");
	// fix me
}

void swapArr(int** a, int** b){
	// fix me
	int* temp = (int*)*a;
	*a = *b;
	*b = temp;
	// fix me
}


int main(){
	
	int arrA[10] = {2, 4, 6, 8, 1, 5, 7, 3, 9};
	int arrB[10] = {1, 9, 3, 7, 2, 8, 4, 5, 6};

	int* pa = arrA;
	int* pb = arrB;
	
	
	//printArr A, B
	printArr(pa, 10);
	printArr(pb, 10);
	
	
	//swap Arr A, B
	swapArr(&pa, &pb);
	
	//printArr A, B
	printArr(pa, 10);
	printArr(pb, 10);
	
	return 0;
} 
