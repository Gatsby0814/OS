//
//  main.c
//  0604금 예제
//
//  Created by 김성준 on 2021/06/03.
//

/*
// 문제1. 아래 코드와 같은 결과값이 나오도록 코드를 작성할 것. (switch, if 사용 금지)
 
#include <stdio.h>

int main(void) {
    int a = 0, b = 0, c = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("Select function : 1.sum, 2.sub, 3.mul : ");
    scanf("%d", &c);
    
    switch (c) {
        case 1:
            printf("Result = %d\n", a+b);
            break;
        case 2:
            printf("Result = %d\n", a-b);
            break;
        case 3:
            printf("Result = %d\n", a*b);
            break;
    }
    
    return 0;
}
*/

/*
//문제1 답
#include <stdio.h>

int sum(int a, int b, int c) { return a+b+c; }
int sub(int a, int b, int c) { return a-b-c; }
int mul(int a, int b, int c) { return a*b*c; }

void main(void) {
   int a = 0, b = 0;
   printf("Enter two numbers: ");
   scanf("%d %d", &a, &b);
   
   int (*pFunc[3])(int, int) = {sum, sub, mul};
   int op = 0;
   
   printf("Select function : 1.sum, 2.sub, 3.mul : ");
   scanf("%d", &op);
   printf("Result = %d\n", pFunc[op-1](a, b));
}
*/

/*
// 문제2. 이 코드에서 잘못된 지점을 설명하시오.

#include <stdio.h>

int *getSum(int *a, int *b) {
    int sum = *a + *b;
    return &sum;
}

void main(void) {
    int a = 20, b = 10;
    int *sum = getSum(&a, &b);
    setArray();
    printf("Sum = %d\n", *sum);
}
 */

/*
 문제2 답: 로컬 변수의 값이 아니라, 주소를 출력하게 되면 원하는 값을 출력할 수 없게 됨.
 함수가 호출될 때 스택 프레임에 메모리 공간이 생겼다가
 함수 호출이 종료되면 그 메모리 공간이 사라지기 때문. -> 물론 쓰레기 값으로 원하는 결과가 출력될 수 있긴 하나
 로지컬 에러를 발생시키게 됨.
*/

 
/*
// 문제3. 아래 코드의 잘못된 지점을 설명하고, 포인터를 이용해서 2차원 배열을 출력하는 코드를 작성하시오.
#include <stdio.h>

void main(void) {
    int arr[3][5] = { 0 };
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 5; col++) {
            arr[row][col] = 10 * row + col;
        }
    }
    
    int *pArr = arr;
    printf("%d\n", pArr[1][3]);
}
*/

/*
문제3 답

printf("%d\n", *(pArr+(1*5)+3));

#include <stdio.h>

#define ROW_SIZE 3
#define COL_SIZE 5

void main(void) {
    int arr[ROW_SIZE][COL_SIZE] = { 0 };
    for (int row = 0; row < ROW_SIZE; row++) {
        for (int col = 0; col < COL_SIZE; col++) {
            arr[row][col] = 10 * row + col;
        }
    }
    
    int *pArr = arr;
    
    for (int row = 0; row < ROW_SIZE; row++) {
        for (int col = 0; col < COL_SIZE; col++) {
            printf("%d\t", *(pArr + (row*COL_SIZE) + col));
        }
        printf("\n");
    }
}
*/
