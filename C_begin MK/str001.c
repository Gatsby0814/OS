#include <stdio.h>

int strC(char string[], int _maxLen, char* _newString, int _from);

int main(int argc, char* argv[]) {
	char str[6] = "Hello";
	printf("%s\n", str);
			    
	strC(str, 5, "y!", 2);
	printf("%s\n", str);
					    
	strC(str, 5, "C Language", 0);
	printf("%s\n", str);
						    
	return 0;
}

int strC(char string[], int _maxLen, char* _newString, int _from) {
	int i = 0;

	if(_newString!=NULL&& string!=NULL){

	while((_from+i < _maxLen) && _newString[i]!='\0'){
		string[_from+i] = _newString[i];
		i++;
	}
	string[_from+i]='\0';
	}

	else{
	printf("NULL Pointer error");
	return 1;
	}
			 
}
