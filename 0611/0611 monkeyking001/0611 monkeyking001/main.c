//
//  main.c
//  0611 monkeyking001
//
//  Created by 김성준 on 2021/06/11.
//

#include<stdio.h>
#define STR_MAX 155

int stringLength(char* _str);
char* stringCopy(char* _dst, const char* _src);
char* stringConcatenate(char* _dst, const char* _src);

int main(){

//declare str 3 way -> 1. char array(defined size array) 2. char array(undefined size), char pointer
    char str01[STR_MAX] = {'H','E','L','L','\0'};
    char str02[] = "welcome to hell";
    char* str03 = "wish your survival...";

    //printf array in 2 different way  -> 1. char array index, 2. printf

    //print str01
    int i = 0;
    while(str01[i] != '\0') {
        printf("%c", str01[i]);
        i++;
    }
    printf("\n");
    
    //print str02
    printf("%s\n", str02);

    //print str03
    printf("%s\n", str03);

    char str05[STR_MAX] = { 0 };
    
    printf("input string : ");
    if(gets(str05) == NULL) {
        printf("Fail to get a string!\n");
        return -1;
    }
    
    printf("str05 : %s\n", str05);
    printf("%s\n", str05);

    // reset str05
    char str06[STR_MAX] = { 0 };
    printf("\ninput string you want to change : ");
    
    if(gets(str06) == NULL) {
        printf("Fail to get a string!\n");
        return -1;
    }
    stringCopy(str05, str06);
    printf("str05 : %s\n", str05);
    printf("%s\n", str05);
    
    //input strinf for _dst
    char strdst[STR_MAX] = { 0 };
    printf("\ninput string for _dst: ");
    if(gets(strdst) == NULL) {
        printf("Fail to get a string!\n");
        return -1;
    }
    printf("%s\n", strdst);
  
    //input string for _src
    char strsrc[STR_MAX] = { 0 };
    printf("input string you want to append: ");
    if(gets(strsrc) == NULL) {
        printf("Fail to get a string!\n");
        return -1;
    }
  
    stringConcatenate(strdst, strsrc);
    printf("%s\n", strdst);

    //append the _src after _dst
    return 0;
}


int stringLength(char* _str){
    if (_str == NULL) return 0;
    
    int len = 0;
    while(_str[len] != '\0')
        len++;
    return len;
}

char* stringCopy(char* _dst, const char* _src){
    if (_dst == NULL) return NULL;
    
    int i = 0;
    for(i; _src[i] != '\0'; i++) {
        _dst[i] = _src[i];
    }
    _dst[i] = '\0';
    return _dst;
}

char* stringConcatenate(char* _dst, const char* _src) {
    if (_dst == NULL) return NULL;
    int len = stringLength(_dst);
    stringCopy(&_dst[len], _src);
    
    return _dst;
}

