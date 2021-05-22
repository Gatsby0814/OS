#include <stdio.h>

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}
int multi(int a, int b){
	return a*b;
}
int div(int a, int b){
	return a/b;
}

int main(){

	int on = 1;
	
	while(on==1){
		
	int a, b, result, op = 0;
	char onChar;
	
	printf("Input operand number a, b \n");
	scanf("%d%d", &a, &b);
	
	printf("Choose Operator\n");
	printf("1: add		2: sub		3:multiplier	4:division(a/b)\n");
	scanf("%d", &op);
	
	
	int (*functionPointer[4])(int, int) = {add, sub, multi, div};	
	result = functionPointer[op-1](a, b);	
	printf("Result : %d\n", result);
	
	printf("Exit? (Y/N)\n");
	scanf(" %c", &onChar);
	
	if(onChar=='Y'||onChar=='y'){
		on = 0;
	}
	
	}	
	
	return 0;
}
