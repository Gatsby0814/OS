#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void setArr(int* _arr);
void printArr(int* _arr);
void swapArr(int** _arrA, int** _arrB);

int main(){
    int numA, numB;

    printf("how many elements? in array A\n");
    scanf("%d", &numA);
    //fix me->
    //make arrA and allocate memory for arrA 
    //<-fix me

    printf("how many elements? in array B\n");
    scanf("%d", &numB);
    //fix me->
    //make arrB and allocate memory for arrB
    //<-fix me



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




    //fix me->

    //free memories allocated for arrA,B
    
    //<-fix me

    return 0;
}

void setArr(int* _arr){
    //fix me->
    //pointer check
    //set ArrA, B with random number (element<num)
    //<-fix me
}

void printArr(int* _arr){
    //fix me->
    //pointer check
    //print ArrA, B
    //<-fix me
}

void swapArr(int** _arrA, int** _arrB){
    //fix me->
    //pointer check
    //<-fix me
}