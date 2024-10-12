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

Point pointview()
{
	Point pt;
	printf("Enter value of x:\n");
	scanf("%d",&pt.x);
	printf("Enter value of y:\n");
	scanf("%d",&pt.y);
	return pt;
}
int main(){
	Point pt1;
	pt1 = pointview();
	printPoint(pt1);
return 0;
}
