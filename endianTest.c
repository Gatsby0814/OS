#include<stdio.h>

void endiantest(){

    int test = 0x1234;

    printf("%x\n", *(char*)&test);

    if(*(char*)&test == 0x34){
        printf("litlle endian system");
    }
    else{
        printf("big endian");
    }
    
}

int main(){

    endiantest();
    return 0;
}