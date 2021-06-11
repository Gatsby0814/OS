//
//  main.c
//  0604 monkeyking001
//
//  Created by 김성준 on 2021/06/04.
//

/*
//1
//Manupulating var with pointer (print, swap)
#include <stdio.h>

//check the validity of pointer!!(prevent the error)
int swapVar(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

void printVar(int *a){
    printf("%d\n", *a);
}

int main(){
    
    int a = 10;
    int b = 20;
    
    int* pa = &a;
    int* pb = &b;
    
    //print Var A, B
    printVar(pa);
    printVar(pb);
    
    //swap Var A ,B
    swapVar(pa, pb);
    
    //print Var A, B
    printVar(pa);
    printVar(pb);
    
    
    return 0;
}
*/

//---------------------------------------------------------------------------------------

/*
//2
//Manupulating arr with pointer (print, swap)
#include<stdio.h>

int printArr(int* a, int len){
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}


 void swapArr(int** a, int** b){
     int* temp = *a;
     *a = *b;
     *b = temp;
 }

int main(){
    
    int arrA[10] = {2, 4, 6, 8, 1, 5, 7, 3, 9};
    int arrB[10] = {1, 9, 3, 7, 2, 8, 4, 5, 6};

    int* pa = arrA;
    int* pb = arrB;
    
    //printArr A, B
    printArr(pa, 10);
    printArr(pb, 10);
    
    //swap Arr A, B
    swapArr(&pa, &pb);
    
    //printArr A, B
    printArr(pa, 10);
    printArr(pb, 10);

    return 0;
}
*/

//---------------------------------------------------------------------------------------


/*

 오류난 3번 프린트 함수
 
void print2DArray(int** a){//be caution for that a is address value!!
    for (int i = 0; i< ROW_SIZE*COL_SIZE; i++) {
        printf("%d\t", *a);
        a++;
        if((i+1) % COL_SIZE == 0) printf("\n");
    }
}
*/

/*
//3
//Manupulating Multi Dimension Array with pointer (print, swap)
#include<stdio.h>

#define ROW_SIZE 10
#define COL_SIZE 3


void print2DArray(int** a){//be caution for that a is address value!!
    int* address = (int*)a;
    for (int i = 0; i< ROW_SIZE*COL_SIZE; i++) {
            printf("%d\t", *address);
            address++; //*address++; 해도 됨. 왜?
            if((i+1) % COL_SIZE == 0) printf("\n");
        }
    }
*/
/*
void print2DArray(int** a){//be caution for that a is address value!!
    for (int i = 0; i< ROW_SIZE*COL_SIZE; i++) {
        printf("%d\t", *(int*)a);
        *a++;
        if((i+1) % COL_SIZE == 0) printf("\n");
    }
}
*/

/*
void swap2DArray(int*** a, int*** b){
    int** temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    
    int arrA[ROW_SIZE][COL_SIZE] = {0};
    int arrB[ROW_SIZE][COL_SIZE] = {0};
    
    //int i, j;
    
    for(int i = 0; i<ROW_SIZE; i++){
        for(int j = 0; j<COL_SIZE; j++){
            arrA[i][j] = i*10 + j;
        }
    }
    
    for(int i = 0; i<ROW_SIZE; i++){
        for(int j = 0; j<COL_SIZE; j++){
            arrB[i][j] = i*100 + j*10;
        }
    }
   
    int** pa = (int**)arrA;
    int** pb = (int**)arrB;
    
    //print array A, B
    printf("\narrA\n");
    print2DArray(pa);
    
    printf("\narrB\n");
    print2DArray(pb);
    
    //swap A, B
    swap2DArray(&pa, &pb);
    
    //print array A,B
    printf("\narrA\n");
    print2DArray(pa);
    printf("\narrB\n");
    print2DArray(pb);
    
    
    return 0;
}
*/

/*
//Manupulating Multi Dimension Array with pointer (print, swap)
#include<stdio.h>

void print2DArray(int** a, int row, int col){//be caution for that a is address value!!
    for (int i = 0; i < row*col; i++) {
        printf("%d ", *a); a++;
        if ((i+1) % col == 0) printf("\n");
    }
    
}

void swap2DArray(int*** a, int*** b){
    int **temp = *a;
    *a = *b;
    *b = temp;
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
*/

//---------------------------------------------------------------------------------------

/*
//4
#include<stdio.h>

int endianTest();

int main(){

    endianTest();

    return 0;
}

int endianTest(){

    int test = 0x1234; //sizeof(int) = 4bytes,   1byte -> 8bits -> 2 * 4bits(1 digit of 0x)
    
    char* p = (char*)&test;
    printf("*p = %x\n", *p);
    
    if (*p == 0x12) printf("Big-endian!\n");
    else printf("Little-endian!\n");
    
    return 0;
}
*/


/*
#include <stdio.h>

int swap(int* pA, int* pB);

int main() {
    int a = 1;
    int b = 2;
    
    int* pA = &a;
    int* pB = &b;
    
    printf("a = %d, b = %d\n", a, b);
    
    swap(pA, pB);
    printf("After swap\n");
    printf("a = %d, b =  %d\n", a, b);
    
}

int swap(int* pA, int* pB) {
    int temp = 0;
    temp = *pA;
    *pA = *pB;
    *pB = temp;
    
    return 0;
}
*/
#include <stdio.h>

int swap(int* pA, int* pB);

int main() {
    int a = 1;
    int b = 2;
    
    int* pA = NULL;
    int* pB = NULL;
    pA = &a;
    pB = &b;
    
    printf("a = %d, b = %d\n", a, b);
    
    swap(pA, pB);
    printf("After swap\n");
    printf("a = %d, b =  %d\n", a, b);
    
}

int swap(int* pA, int* pB) {
    
    if (pA != NULL && pB != NULL) {
    int temp = 0;
    temp = *pA;
    *pA = *pB;
    *pB = temp;
    }
    else printf("NULL pointer!");
    
    return 0;
}
