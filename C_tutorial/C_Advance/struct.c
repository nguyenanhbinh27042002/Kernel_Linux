#include "stdio.h"
#include "stdlib.h"

struct point {
	int x;
	int y;
}; 

struct date
{
	/*struct in day for using cusomized data */
	int day;
	int months;
	int year;
};

int main()
{
	struct date graduteDate;
	printf("Enter day:");
	scanf("%d",&graduteDate.day);

	printf("Enter months:");
	scanf("%d",&graduteDate.months);

	printf("Enter year:");
	scanf("%d",&graduteDate.year);
	printf("The my gradute day is (%d,%d,%d) \n",graduteDate.day,graduteDate.months,graduteDate.year);


	return 0;
}

