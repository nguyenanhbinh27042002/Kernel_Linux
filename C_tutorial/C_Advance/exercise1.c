#include "stdio.h"
#include "stdlib.h"



/*Exercise 2 :
	Write the function :
	Function 1: - get the function variable and prints it information
	Function 2: -responsible for getting input from user and return it */

typedef struct Point {
	int x;
	int y;

}Point; 
void printPoint(Point pt){
	printf("The value of x %d\n",pt.x);
	printf("The value of y:%d\n",pt.y);
}

Point pointview(){
	Point pt;
	printf("Enter the x \n");
	scanf("%d",&pt.x);
	printf("Enter the y \n");
	scanf("%d",&pt.y);

	return pt;
}
int main(){
	Point pt1,pt2;
	pt1 = pointview();
	printPoint(pt1);

return 0;
}
