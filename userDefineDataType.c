#include<stdio.h>

typedef double COORDINATE_TYPE;

typedef struct{
	COORDINATE_TYPE x;
	COORDINATE_TYPE y;
} Point;

Point pointSum(Point* _p1, Point* _p2){
	
	Point result = {_p1->x +_p2->x, _p1->y + _p2->y};  //_p1->x == *_p1.x
	return result;
}

void printPoint(const Point* _p){
	
	if(sizeof(COORDINATE_TYPE)==4){
	printf("_p.x : %.10f\t",_p->x);
	printf("_p.y : %.10f\t",_p->y);
	printf("\n");		
	}
	
	if(sizeof(COORDINATE_TYPE)==8){
	printf("_p.x : %.10f\t",_p->x);
	printf("_p.y : %.10f\t",_p->y);
	printf("\n");	
	}
	
}

int main(){
	Point p[2] = {{3.1234567890123456789, 4.1234567890123456789 }, {15.2, 1.21}
};
printPoint(&p[0]);
printPoint(&p[1]);
Point sum = pointSum(&p[0], &p[1]);
printPoint(&sum);

	
	return 0;
}
