#include "stdio.h"
#include "stdlib.h"

typedef struct point {
	int x;
	int y;
}Point;

int main(){
	Point pointArray[5];
	printf("Enter the value first point x\n");
	scanf("%d",&pointArray[0].x);
	printf("Enter the value first point y\n");
	scanf("%d",&pointArray[0].y);
	
	for(int i=0;i<5;i++)
	{	
		/*Enter code and innovate*/
		printf("Enter the value point x string #%d \n",i+1);
		scanf("%d",&pointArray[i].x);
		printf("Enter the value point y string #%d \n",i+1);
		scanf("%d",&pointArray[i].y);
	}
	for (int i=0;i<5;i++){
		printf("Point #%d = (%d,%d)\n",i+1,pointArray[i].x,pointArray[i].y);
	}
	return 0;
}


