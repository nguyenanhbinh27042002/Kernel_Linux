#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct point 
{
	int x;
	int y;
}Point;

typedef struct employee
{
	char name[10];
	float age;
	int id;
}Employee;

int equalPoints(Point p1, Point p2) // "Operation =="
{
	if((p1.x == p2.x)&&(p1.y==p2.y)){
		return 1;
	}
	else {
		return 0;
	}
}
int notEqualPoints(Point p1, Point p2) // "Operation !="
{
	if((p1.x != p2.x)||(p1.y!=p2.y)){
		return 1;
	}
	else {
		return 0;
	}
}

int equalAge(Employee e1,Employee e2)
{
	if(e1.age == e2.age){
		return 0;
	}
	else if (e1.age < e2.age) {
		return -1;
	}
	else 	//e2.age > e1.age
		return 1;
}

int equalName(Employee e1,Employee e2)
{
	if(e1.name == e2.name){
		return 0;
	}
	else if (e1.name < e2.name) {
		return -1;
	}
	else 	//e2.age > e1.age
		return 1;
}
int equalId(Employee e1,Employee e2)
{
	if(e1.id == e2.id){
		return 0;
	}
	else if (e1.id < e2.id) {
		return -1;
	}
	else 	//e2.age > e1.age
		return 1;
}

int main()
{
	Point point1 = {2,4};
	Point point2 = {3,5};
	if (equalPoints(point1,point2) !=0) {
		// Code related to the fact that the points are equal
		printf("The struct is not equal\n");
	}
return 0;
}
