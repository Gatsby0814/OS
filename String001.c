#include<stdio.h>
#define STR_MAX 155

int stringLength(char* _str);
char* stringCopy(char* _dst, const char* _src);
char* stringConcatenate(char* _dst, const char* _src);

int main(){

//declare str 3 way -> 1. char array 2. undefined size string, defined size string
    char str01[STR_MAX] = {'H','E','L','L','\0',};
    char str02[] = "welcome to hell";
    char* str03 = "wish your survival...";

//printf array 2 way  -> 1. char array index, 2. printf
    int i = 0;
    while(str01[i]!='\0'){
    printf("%c", str01[i]);
    i++;
}
    printf("\n");

    printf("%s", str02);
    printf("\n");

    printf("%s", str03);
    printf("\n");

    // input string fgets
    char str05[STR_MAX];
    printf("input string : ");
    fgets(str05, sizeof(str05), stdin);
    printf("str05 : %s", str05);
    puts(str05);

    // reset str05
    printf("input string you want to change : ");
    fgets(str05, sizeof(str05), stdin);
    printf("str05 : %s", str05);
    puts(str05);

    char strdst[STR_MAX];
    printf("input string for _dst: ");
    fgets(strdst, sizeof(strdst), stdin);
    strdst[stringLength(strdst)-1]=' ';
    puts(strdst);

    char strsrc[STR_MAX];
    printf("input string you want to append: ");
    fgets(strsrc, sizeof(strsrc), stdin);
    
    strsrc[stringLength(strsrc)-1]=' ';
    stringConcatenate(strdst, strsrc);
    puts(strdst);

    return 0;
}

int stringLength(char* _str){

    int length = 0;

    while(_str[length]!='\0'){
        length++;
    }
    return length;
}
char* stringCopy(char* _dst, const char* _src){

    int i = 0;
    while(_src[i]!='\0'){
        _dst[i] = _src[i];
        i++;
    }
    _dst[i]='\0';

    return _dst;
}
char* stringConcatenate(char* _dst, const char* _src){
    int start_index = stringLength(_dst);
    stringCopy(&_dst[start_index], _src);
}