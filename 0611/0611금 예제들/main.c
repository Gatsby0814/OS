//
//  main.c
//  0611금 예제들
//
//  Created by 김성준 on 2021/06/10.
//


/*
//1. 문자열 변경 함수 만들기
#include <stdio.h>

int strC(char string[], int _maxLen, char* _newString, int _from);

int main(int argc, char* argv[]) {
    char str[6] = "Hello"; printf("%s\n", str);
    
    strC(str, 5, "y!", 2);
    printf("%s\n", str);
    
    strC(str, 5, "C Language", 0);
    printf("%s\n", str);
    
    return 0;
}

int strC(char string[], int _maxLen, char* _newString, int _from) {
// write code!
}
*/

//답:
/*
#include <stdio.h>

int strC(char string[], int _maxLen, char* _newString, int _from);

int main(int argc, char* argv[]) {
    char str[6] = "Hello"; printf("%s\n", str);
    
    strC(str, 5, "y!", 2);
    printf("%s\n", str);
    
    strC(str, 5, "C Language", 0);
    printf("%s\n", str);
    
    return 0;
}

int strC(char string[], int _maxLen, char* _newString, int _from) {
    int len = 0, i = 0;
    while(_newString[i] != '\0' && _from + i < _maxLen) {
        string[_from + i] = _newString[i];
        i++;
    }
    string[_from + i] = '\0';
    return i;
}
*/

/*
//2. 문자열 복사함수 만들기

#include <stdio.h>

char* strCopy(char* _dst, const char* _src) {
    // write code (_src is the string to be copied)
}

int main(int argc, char* argv[]) {
    // write code
}
*/

// 답 :
/*
#include <stdio.h>

char* strCopy(char* _dst, const char* _src) {
    if (_dst == NULL) return NULL; // 포인터 유효성 판단?
    int i = 0;
    for (i; _src[i] != '\0'; i++) {
        _dst[i] = _src[i];}
    _dst[i] = '\0';
    return _dst;
}

int main(int argc, char* argv[]) {
    char str1[255] = { 0 };
    char str2[] = "My name is kim!";
    printf("str2 = %s\n", str2);
    
    if(gets(str1) == NULL) return -1; //이것도 포인터 유효성 판단? + 유효성 판단하는 if문 안에서 바로 함수 호출
    if(strCopy(str2, str1) == NULL) return -1;
    
    printf("str2 = %s\n", str2);
    return 0;
}
*/

/*
//3. 아래 코드에서 오류 찾기

#include <stdio.h>

int main(int argc, char* argv[]) {
    char* strs[3] = {"first", "second","three"};
    
    for (int i = 0; i < 3; i++) {
        printf("%s ", strs[i]);
    }
    printf("\n");
    
    for (int i = 0; i < 3; i++) {
        scanf("%s", strs[i]);
    }
    printf("\n");
    
    for (int i = 0; i < 3; i++) {
        printf("%s ", strs[i]);
    }
    
    return 0;
}
*/

// 답:
/*
for (int i = 0; i < 3; i++) {
    scanf("%s", strs[i]);
}
--> 입력을 받고 싶으면 문자열의 배열을 사용해야 함. 여기서는 문자열 상수들의 배열이라 수정 불가
*/

/*
//4. 아래 코드에서 오류 찾기
#include <stdio.h>

struct Card {
    char name[10];
    int power;
};

int main(void) {
    struct Card cardA = { 0 }, cardB = { 0 };
    
    printf("CardA Name: "); scanf("%s", &cardA.name);
    printf("CardA power: "); scanf("%d", &cardA.power);
    
    printf("CardB Name: "); scanf("%s", &cardB.name);
    printf("CardB power: "); scanf("%d", &cardB.power);
    
    if (cardA.power == cardB.power) printf("Draw!");
    else if (cardA.power > cardB.power) printf("%s win!", cardA.name);
    else printf("%s win!", cardB.name);
    
    return 0;
}
*/

// 답:
/*
카드의 이름은 문자열 즉, 배열이고
배열의 변수명은 곧 주소. 그렇기에 scanf에서 &를 사용할 필요 없음.
*/

// 참고 질문

//1
/*
#include <stdio.h>

int main(int argc, char* argv[]) {
    int c = 0; // 여기서 char c = 0; 으로 해도 되는데 왜 int로?
    
    while((c = getchar()) != EOF )
        putchar(c);
    return 0;
}
 
 ------------------------------------------------------------

#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[]) {
    int c = 0; // 이 부분도 char 로 바꿔도 됨?
    
    while ((c = getchar()) != EOF) {
        if (isupper(c))
            c = tolower(c);
        else
            c = toupper(c);
        
        putchar(c);
    }
    return 0;
}
 */


//2 모듈을 if문 속 조건으로 삼아도 바로 호출되어 사용된다?
/*
#include <stdio.h>

int main(int argc, char* argv[]) {
    char str[255] = { 0 };
    
    printf("Enter a sentence : ");
    if (gets(str) == NULL) {
        printf("Fail to get a string\n");
        return -1;
    }
    
    if (puts(str) == EOF) {
        printf("Fail to put a string");
        return 0;
    }
    return 0;
}
*/
