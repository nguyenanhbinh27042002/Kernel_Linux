#include "stdio.h"
#include "stdlib.h"

int  main(){
    int num1 = 50;
    int num2 = 100;
    int *ptrA, *ptrB;
    printf("The value of number:%d\t%d\n",num1,num2);

    /*tro den gia tri num1 num2 : pointer khai bao*/
    ptrA = &num1;
    ptrB = &num2;
    printf("The value of num1,num2:%d\t%d\n",num1,num2);


    *ptrA = *ptrA+1 ;
    *ptrB = *ptrB+3;
    printf("The value new the number1 and number2 %d\t%d\n",num1,num2);
    return 0;
}
