#include<stdio.h>

int isLitEnd();

int main(){

    isLitEnd();

    return 0;
}

int isLitEnd(){

    int test = 0x1234; //sizeof(int) = 4 byte,   1byte -> 8bit -> 2 * 4bit(1 digit of 0x) 

    if(*(char*)&test==0x12){
        printf("Big endian");
    }
    else{
        printf("little endian");
    }
}