#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_SIZE 255
#define LEVEL_UP_RATE 1.1f;

enum Charater_Type {
	Warrior = 0b00, Wizard = 0b01, Archer = 0b10, Priest = 0b11 //Warrior = 0 , Wizard = 1, Archer = 2, Priest = 3
 };

typedef unsigned int UINT;

typedef struct {//little endian system -> last value will be saved in first memory!

	//name
	char name[MAX_NAME_SIZE];

	//ID, first two bit represent character type
	union
	{
		UINT ID;
		struct{
			UINT ID_num:30;		
			UINT typeBit:2;
		}Id_struct;		
	};
	
	//Level
	UINT Level;

	//hp, last two bit represent character type
	union
	{
		UINT hp;
		struct
		{
			UINT typeBit:2;
			UINT hp:30;
		}hp_struct;
	};
	
	//ability
	union {
		UINT ability;
		UINT stamina;
		UINT magicPower;
		UINT arrow;
		UINT prayer;
	};

	// define this structure
} character;

void printCharInfo(character* _char);
int setCharInfo(character* _char);
int levelUp(character* _char);

int ID_base = 1000;

int setCharInfo(character* _char) {
	// write your code here

	UINT type;
	printf("Select Type: 0.Warrior 1.Wizard 2.Archer 3.Priest: \n");//Type -> HP, ID
	scanf("%d", &type);

	_char->Id_struct.ID_num = ID_base;
	_char->Level=1;

	if(type >= 4){
		printf("wrong type");
		return -1;
	}
	
	_char->Id_struct.typeBit = type;

	printf("Enter [name] [HP] [ST|MP|AR|PR] :");//name, hp, ability 
	scanf("%s %d %d", _char->name, &_char->hp, &_char->ability);

	_char->hp_struct.typeBit= type;

	return 0;
}

int levelUp(character* _char){
	// write your code here
	_char->Level++;
	_char->hp_struct.hp = _char->hp_struct.hp*LEVEL_UP_RATE;
	_char->ability = _char->ability*LEVEL_UP_RATE;
	printf("Level UP!\n");
	return 0;
}

void printCharInfo(character* _char) {
	
	//Warrior = 0b00, Wizard = 0b01, Archer = 0b10, Priest = 0b11
	printf("[Name] %s [ID] %u ", _char->name, _char->ID);

	switch (_char->Id_struct.typeBit)
	{
	case Warrior :
		printf("[Warrior, Lv.%d] [HP] %d [ST] %d\n", _char->Level, _char->hp, _char->ability);
		break;
	
	case Wizard :
		printf("[Wizard, Lv.%d] [HP] %d [MP] %d\n", _char->Level, _char->hp, _char->ability);
		break;

	case Archer :
		printf("[Archer, Lv.%d] [HP] %d [Arrow] %d\n", _char->Level, _char->hp, _char->ability);
		break;	
	case Priest:
		printf("[Priest, Lv.%d] [HP] %d [Prayer] %d\n", _char->Level, _char->hp, _char->ability);
		break;	

	default:
		break;
	}
}


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

	return 0;
}