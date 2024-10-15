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

int main()
{
	Point p1 = {2,4};
	Point p2 = {3,5};
	if (p1 < p2) {

	}
return 0;
}
