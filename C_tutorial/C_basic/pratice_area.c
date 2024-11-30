#include "stdio.h"
#include "stdlib.h"


int main(){
	double height, width;
	printf("Enter the height \n");
	scanf(" %lf",&height);

	printf("Enter the width \n");
	scanf("%lf",&width);
	
	double area;
	area = height*width;
	
	printf("Area of the rectangle %lf \n",area);
	return 0;
}