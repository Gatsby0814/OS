#include <stdio.h>


void swap(int *x, int *y){ //x is pointer(address in memory), whose value is integer type

	int temp;
	temp = *x;
	*x = *y;
	*y = temp;	
}


void swapWithoutPointer(int x, int y){

	int temp;
	temp = x;
	x = y;
	y = temp;	
}
 
int main(){
	
	int a = 45;
	int b = 30;
	
	swapWithoutPointer(a, b);
	printf("after swap without Pointer, a =  %d, b =  %d\n", a, b);
	
	int *pa = &a;
	int *pb = &b;
	
	swap(&a, &b);
	printf("after swap with Pointer, a =  %d, b =  %d\n", a, b);
	
	
	swap(pa, pb);
	printf("after swap with Pointer, (swap(pa, pb);)a =  %d, b =  %d\n", a, b);
	
	printf("pa : %d, pb : %d", pa, pb);
	printf("*pa : %d , *Pb : %d \n", *pa, *pb);
	printf("&*pa : %d , &*pb : %d \n", &*pa, &*pb);
	printf("&a : %d , &b : %d \n", &a, &b);
	printf("*&a : %d , *&b : %d \n",*&a, *&b);
		
	return 0;
}
