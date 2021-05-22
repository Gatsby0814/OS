#include <stdio.h>
#define ROW_SIZE 3
#define COL_SIZE 5

int main(void) {
	
int arr[ROW_SIZE][COL_SIZE] = { 0 };

for (int row = 0; row < ROW_SIZE; row++){
	for (int col = 0; col < COL_SIZE; col++){
		arr[row][col] = 10 * row + col;
	}
}


for (int row = 0; row < ROW_SIZE; row++){
	for (int col = 0; col < COL_SIZE; col++){
		printf("arr[%d][%d]:\t%d\t", row, col, arr[row][col]);
	}
	printf("\n\n");
}


int* pArr = (int *)arr;
for (int row = 0; row < ROW_SIZE; row++) {
	for (int col = 0; col < COL_SIZE; col++)
	printf("%d\t", *(pArr+(COL_SIZE*row)+col));
	printf("\n");
}

return 0;
}
