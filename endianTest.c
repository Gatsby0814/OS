#include<stdio.h>

void endiantest(){

    int test = 0x1234;

    printf("%x", *(char*)&test);

    if(*(char*)&test==0x12){
        printf("Big endian!");
    }
    else{
        printf("little endian!");
    }
}

int main(){

    endiantest();
    return 0;
}