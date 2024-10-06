#include "stdio.h"
#include "stdlib.h"

int main(){
	float time_hours,time , distance, speed;
	float temp;
	printf("Enter the speed for the vehicle \n");
	scanf("%f",&speed);
	printf("Enter the distance from A to B\n");
	scanf("%f",&distance);
	time_hours = (float)(distance/speed);
	time = time_hours*60;
	printf("The time is vehicle : %f\n",time);
	
return 0;
}
