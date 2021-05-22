typedef enum { Add=10, Delete, Quit} Menu;

int main(){
	Menu menu;
	
	printf("sizeof(Menu):\t%d bytes\n", sizeof(Menu));
	
	while(1){
		printf("[%d]: Add [%d]: Delete [%d]: Quit\n", Add, Delete, Quit);
		scanf("%d", &menu);
		
		switch (menu){
			case Add : 
				printf("selected Add!\n");
				break;
			case Delete :
				printf("selected Delete!\n");
				break;
			case Quit :
				return 0;	
		}	
	}
	return 0;
}
