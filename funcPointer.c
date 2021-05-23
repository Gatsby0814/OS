#include<stdio.h>
#include<stdlib.h>

int sum(int a, int b){return a+b;}
int sub(int a, int b){return a-b;}
int mul(int a, int b){return a*b;}

int main(){
    int((*pFunc[3])(int, int));
    pFunc[0]=sum;
    pFunc[1]=sub;
    pFunc[2]=mul;  
    int switchNum = 0;
    
    while(switchNum==0){
    int a, b, op;
    printf("a:\tb:\n");
    scanf("%d%d",&a, &b);
    printf("Select function: 1.sum, 2.sub, 3.mul: ");
    scanf("%d", &op);
    printf("Result = %d\n", pFunc[op-1](a, b));
    fflush(stdin);
    printf("continue? 1/0 (1 is quit)");
    scanf("%d", &switchNum);
    }

    
    return 0;
}