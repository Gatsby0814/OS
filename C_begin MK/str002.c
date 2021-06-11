#include <stdio.h>

char* strCopy(char* _dst, const char* _src){
		if(_dst!=NULL && _src!=NULL){
			int i =0;
			while(_src[i]!='\0'){
				_dst[i]=_src[i];
				i++;
			}
			_dst[i]='\0';
		}
		else{
			printf("NULL Pointer Error");
		}
		
}

int main(int argc, char* argv[]){
	
	char _dst[]="Hello World";
	char const _src[]="Change the World";
	
	printf("%s\n",_dst);
	printf("%s\n",_src);

	strCopy(_dst, _src);
	
	printf("%s\n",_dst);
	printf("%s\n",_src);

	return 0;
}


