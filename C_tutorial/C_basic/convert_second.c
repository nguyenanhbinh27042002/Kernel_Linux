#include "stdio.h"
#include "stdlib.h"

int main()
{   int totalsecond;
    int second,hours,minutes;

    printf("Enter the value for total seconds:");
    scanf("%d",&totalsecond);

    hours = totalsecond/3600;
    minutes = (totalsecond -3600*hours)/60;
    second = (totalsecond - hours*3600)%60;
    printf("Total hours: %d \n",hours);
    printf("Total minutes: %d \n",minutes);
    printf("Total seconds: %d\n",second);
    return 0;
}