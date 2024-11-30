#include "stdio.h"
#include "stdlib.h"



int Maxvalue(){
    int num1,num2;
    int num3;
    printf("Enter the value of the 3 number \n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1>num2){
        if(num1 > num3){
            return num1;
        }
        else
        {
            return num3;
        }
        
    }
    else if( num2>num3){
        return num2;
    }
    else return num3;
}
int main(){
    int max;
    max = Maxvalue(); 
    printf("The value of string function is max value is : %d \n",max);
    return 0;
}
