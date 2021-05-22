#include<stdio.h>

void swapPointer(int** dpA, int** dpB){
	int* temp = *dpA;
	*dpA = *dpB;
	*dpB = temp;
}

void printArr(int* pA, int pASize){
	printf("arr %p :  ", pA);
	for(int i = 0; i<pASize; i++){
		printf("\t%d", *pA);
		pA++;		
	}
	printf("\n");
}

int main(){	
	int arrA [5] = {1,2,3,4,5};
	int arrB [5] = {5,4,3,2,1};
	
	int* pA = arrA;
	int* pB = arrB;
	
	int** dpA = &pA;
	int** dpB = &pB;
	
	printArr(pA, 5);
	printArr(pB, 5);
	swapPointer(dpA, dpB);
	printArr(pA, 5);
	printArr(pB, 5);
	
	return 0;
}
