#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_SIZE 255
#define LEVEL_UP_RATE 1.1f;

enum Charater_Type {Warrior = 0b00, Wizard = 0b01, Archer = 0b10, Priest = 0b11};
typedef unsigned int UINT;

typedef struct {
	// define this structure
	//char*로 선언시 읽기 전용 메모리가 됨. scanf를 사용할 수가 없게됨.

char* Name;

struct {
	UINT ID;
	UINT typeBit:2; 
}ID_struct;

UINT Lv;

struct{
	UINT typeBit:2;
	UINT HP;
}HP_struct;

union {
	UINT ability;
	UINT st;
	UINT mp;
	UINT ar;
	UINT pr;
};

}character;

void printCharInfo(character* _char);
int setCharInfo(character* _char);
int levelUp(character* _char);

int ID_base = 1000;

int main() {
	character myChar = { 0 };

	if (setCharInfo(&myChar) < 0) {
		printf("Error!\n");
		return 0;
	}

	printCharInfo(&myChar);
	
	for (int i = 0; i < 5; i++) {
		levelUp(&myChar);
		printCharInfo(&myChar);
	}

	free(myChar.Name);
	myChar.Name = NULL;

	return 0;
}

int setCharInfo(character* _char) {
	// write your code here
	UINT _typeBit;
	_char->Lv = 1;
	printf("Select Type:  0.Warrior 1.Wizard 2.Archer 3.Priest : ");
	scanf("%d", &_typeBit);

	if(_typeBit>=4){
		printf("wrong type");
		return -1;
	}

	_char->HP_struct.typeBit = _typeBit;
	_char->ID_struct.typeBit = _typeBit;
	_char->ID_struct.ID = ID_base;



	printf("Enter [name] [HP] [ST|MP|AR|PR] : \n");
	char temp [MAX_NAME_SIZE];//after fucn call, temp will be re
	scanf("%s %d %d", temp, &_char->HP_struct.HP, &_char->ability);
	_char->Name = (char*)calloc(MAX_NAME_SIZE, sizeof(char));
	strcpy(_char->Name, temp);

	return 0;
}

int levelUp(character* _char){
	// write your code here
	_char->Lv++;
	_char->HP_struct.HP = _char->HP_struct.HP * LEVEL_UP_RATE;
	_char->ability = _char->ability * LEVEL_UP_RATE;
	printf("Level UP!\n");	

	return 0;
}

void printCharInfo(character* _char) {
	// write your code here

	char* type = "";
	char* abilityType = "";

	switch (_char->HP_struct.typeBit)
	{
	case Warrior:
		type = "Warrior";
		abilityType = "ST";
		break;
	case Wizard:
		type = "Wizard";
		abilityType = "MP";
		break;
	case Archer:
		type = "Archer";
		abilityType = "AR";
		break;				
	case Priest:
		type = "Priest";
		abilityType = "PR";
		break;		
	default:
		break;
	}

	printf("[Name] %s [ID] %d [%s, Lv.%d] [HP] %d [%s] %d\n", _char->Name, _char->ID_struct.ID, type, _char->Lv, _char->HP_struct.HP, abilityType, _char->ability);
}