#include "stdio.h"
#include "stdlib.h"


void findMaxMin(int num1, int num2, int *ptrMax, int *ptrMin){
    if(num1>num2){
        *ptrMax = num1;
        *ptrMin = num2;
    }
    else {
        *ptrMax = num2;
        *ptrMin = num1;
    } 

}
int main(){
    int num1 = 10, num2= 30;
    int max, min;
    findMaxMin(num1,num2,&max,&min);
    printf("The value of max between num1 and num2 %d \n",max);
    printf("The value of min between num1 and num2 %d \n",min);
    return 0;
}