/*
�巡�ﺼ ������ ���簡�� ����,
����ڷκ��� �ɸ��� ����, �ɷ�ġ �й�, �ɸ��� �̸� ���ϱ� ���� �Է¹޾ƺ���
�ɸ��͸� �����ϰ� ���� �ɸ����� Ư���� �´� ȭ���� ����Ͽ� ����.

�ɸ��ʹ� 
1. īī��Ʈ 2. ������ 3. �θ��� 4. ���ݷ� 5.  


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
