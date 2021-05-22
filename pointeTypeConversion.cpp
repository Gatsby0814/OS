#include<stdio.h>
#define TYPE_INT		0
#define TYPE_FLOAT		1
#define TYPE_DOUBLE		2

void* sum(void* a, void* b ,void* result ,int type){
	switch(type){
		case TYPE_INT:
			*((int*)result) = *(int*)a + *(int*)b;
			break;
			
		case TYPE_FLOAT:
			*(float*)result = *(float*)a + *(float*)b;
			break;
			
		case TYPE_DOUBLE:
			*(double*)result = *(double*)a + *(double*)b;
			break;
			
		default:
			printf("undefined type : %d", type);
			
		return result;
	}
}

int main(){
	
	int intA = 1, intB = 2, intRe = 0; 
	float floatA = 2.f, floatB = 10.f, floatRe = 0.f;
	
	sum(&intA, &intB, &intRe, 0);
	printf("a + b = %d\n", intRe);
	
	sum(&floatA,  &floatB, &floatRe, 1);
	printf("a + b = %0.4f\n", floatRe);
	
	
	return 0;
}
