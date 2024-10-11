#include "stdio.h"
#include "stdlib.h"



typedef struct date 
{
	int day;\
	int months;
	int year;
}Date;

void printDate(Date dt)
{
	printf("Year = %d,Months = %d, Day =%d \n",dt.year,dt.months,dt.day);
}
Date inputDate(){
	Date dt;
	printf("Enter day:");
	scanf("%d",&dt.day);
	
	printf("Enter months");
	scanf("%d",&dt.months);
	
	printf("Enter year");
	scanf("%d",&dt.year);
	return dt;
}
int main()
{
	Date graduteDate,todayDate;
	graduteDate = inputDate();

	todayDate = inputDate();
	printDate(graduteDate);
	printDate(todayDate);
	
	
	return 0;
}
