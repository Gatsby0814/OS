/*
드래곤볼 게임을 만든가조 가정,
사용자로부터 케릭터 선택, 능력치 분배, 케릭터 이름 정하기 등을 입력받아보자
케릭터를 선택하고 나면 케릭터의 특성에 맞는 화면을 출력하여 주자.

케릭터는 
1. 카카로트 2. 베지터 3. 부르마 4. 피콜로 5.  


*/

#include<stdio.h>

int main(){
	
	char string[255] = {0};
	
	FILE* fp = fopen("vegeta.txt", "r");
	
	char c = 0;
	while ((c = fgetc(fp)) != EOF){
	printf("%c", c);		
	}
	
	
	
	fclose(fp);

	return 0;
} 
