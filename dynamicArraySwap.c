#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void setArr(int* _arr);
void printArr(int* _arr);
void swapArr(int** _arrA, int** _arrB);

int main(){


    int numA, numB;

    //make arrA and allocate memory for arrA 
    printf("how many elements? in array A\n");
    scanf("%d", &numA);
    //fix me->
    
    
    //<-fix me
    int* ranArrA = (int*)malloc(sizeof(int)*numA);
    memset(ranArrA, 0, sizeof(int)*numA);

    //make arrB and allocate memory for arrB
    printf("how many elements? in array B\n");
    scanf("%d", &numB);
    //fix me->
    
    
    //<-fix me
    int* ranArrB = (int*)malloc(sizeof(int)*numB);
    memset(ranArrB, 0, sizeof(int)*numB);

    //set ArrA, B with random number (element<num)
    setArr(ranArrA);
    setArr(ranArrB);

    //print ArrA, B
    printArr(ranArrA);
    printArr(ranArrB);

    //swap ArrA, B
    swapArr(&ranArrA, &ranArrB);

    //print ArrA, B
    printArr(ranArrA);
    printArr(ranArrB);

    //free memories allocated for arrA,B
    //fix me->
    
    
    //<-fix me
    free(ranArrA);
    free(ranArrB);

    return 0;
}

void setArr(int* _arr){


    //fix me->
    
    //pointer check
    
    //set ArrA, B with random number (element<num)

    //<-fix me
    
    if(_arr!=NULL){
        int len = _msize(_arr)/sizeof(int);
        for(int i = 0; i <len; i++){
            _arr[i]= rand()%len;
        }
    }
    else{
        printf("null pointer error\n");
    }
}

void printArr(int* _arr){
    //fix me->
    
    //pointer check
    
    //print ArrA, B

    //<-fix me
    if(_arr!=NULL){
        int len = _msize(_arr)/sizeof(int);
        printf("<Array>\n");
        for(int i = 0; i < len; i++){
            printf("%d\t", *_arr);
            _arr++;
        }
    printf("\n");
    }

    else{
        printf("null pointer error\n");
    }
}

void swapArr(int** _arrA, int** _arrB){
    //fix me->
    
    //pointer check

    //<-fix me
    if(_arrA!=NULL&&_arrB!=NULL){
        int* temp = *_arrA;
        *_arrA = *_arrB;
        *_arrB = temp;
        }

    else{
        printf("null pointer error\n");
    }
}