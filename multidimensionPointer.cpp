#include<stdio.h>

void print2DArr(int** a, int row, int col){
	
	int* p = (int*)a;
	
	for(int i = 0; i < row*col; i++){
		printf("%d\t", *p);
		p++;
		if((i+1)f%col==0){
			printf("\n");
		}
	}
	printf("\n\n");
}

void swap2DArr(){
	

}

int main () {
	
	
	int arrA[5][4] = { 0,};
	int arrB[6][3] = { 0,};
	

	
	return 0;
}
