#include "stdio.h"
#include "stdlib.h"

typedef struct Point{
	int x;
	int y;
}Point;

void printPoint(Point pt){
	printf("The value of x:%d\n",pt.x);
	printf("The value of y:%d\n",pt.y);
}

Point Inputpoint()
{
	Point pt;
	printf("Enter value of x:\n");
	scanf("%d",&pt.x);
	printf("Enter value of y:\n");
	scanf("%d",&pt.y);
	return pt;
}
int main(){
	Point pt1 = Inputpoint();
	printf("The value before\n");
	printPoint(pt1);
	
	printf("The value after\n");
	pt1.x +=3;
	pt1.y +=1;
	printPoint(pt1);
return 0;
}
