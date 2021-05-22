//Manupulating Multi Dimension Array with pointer (print, swap)
#include<stdio.h>

void print2DArray(int** a, int row, int col){//be caution for that a is address value!!
	// fix me
	int* address = (int*)a;
	for(int i = 0; i< row*col; i++){
		printf("%d\t", *address);
		address++;
		if((i+1)%col==0){
			printf("\n");
		}
	}
	printf("\n");
	// fix me
	
}

void swap2DArray(int*** a, int*** b){
	// fix me
	int** temp = *a;
	*a = *b;
	*b = temp;
	// fix me
}

int main(){
	
	int arrA[10][3] = {0 ,};
	int arrB[10][3] = {0 ,};
	
	int i,j;
	
	for(i = 0; i<10; i++){
		for(j = 0; j<3; j++){
			arrA[i][j] = i*10 + j;
		}
	}
	
	
	for(i = 0; i<10; i++){
		for(j = 0; j<3; j++){
			arrB[i][j] = i*100 + j*10;
		} 
	}
	
	int** pa = (int**)arrA;
	int** pb = (int**)arrB;
	
	//print array A, B
	print2DArray(pa,10,3);
	print2DArray(pb,10,3);
	
	
	//swap A, B
	swap2DArray(&pa, &pb);
	
	//print array A,B
	print2DArray(pa,10,3);
	print2DArray(pb,10,3);
	
	
	return 0;
} 
