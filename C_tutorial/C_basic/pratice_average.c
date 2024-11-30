#include "stdio.h"
#include "stdlib.h"

float findAverage(float grade1, int grade2, int grade3){
    float average; 
    average = (grade1+grade2+grade3)/3.0;
    return average;
}

int main(){
    int num1,num2, num3;
    printf("Enter the value of 3 number \n");
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("The average of 3 number : %f\n",findAverage(num1,num2,num3));
    return 0;
}