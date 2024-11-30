#include "stdio.h"
#include "stdlib.h"

void findMaxMin(int num1, int num2,int *ptrA, int *ptrB){
    if (num1>num2) {
        *ptrA = num1;
        *ptrB = num2;
    }
    else {
        *ptrA = num2;
        *ptrB = num1;
    }
}
int main(){
    int a = 10, b = 20;
    int max,min;
    findMaxMin(a,b,&max,&min);
    printf("The value of max %d \n",max);
    printf("The value of min %d \n",min);

    return 0;
}