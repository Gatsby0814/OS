#include <stdio.h>

int StringChange(char string[], int _maxLen, char* _newString, int _from);

int main(int argc, int* argv[]){
	char str[6] = "Hello";
	StringChange(str, 5, "y!", 2); printf("%s\n", str); //Hey
	StringChange(str, 5, "C Language", 0); printf("%s\n", str); //C Lan
	
	return 0;
}

int StringChange(char string[], int _maxLen, char* _newString, int _from){
	
	int i = 0;	
	
	while(_newString[i]!='\0' && i+_from < _maxLen){
		string[i+_from] = _newString[i];
		i++;
	}
	string[i+_from]='\0';
	
	return 0;
}

