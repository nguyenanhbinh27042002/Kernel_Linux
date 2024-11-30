#include "stdio.h"
#include "stdlib.h"

int main()
{   int a,b;
    printf("Enter the value a: \n");
    scanf("%d",&a);

    printf("Enter the value b: \n");
    scanf("%d",&b);

    // swap the value of pratice
    int temp;
    temp =a ;
    a=b;
    b=temp;

    printf("The value after a: %d\n",a);
    printf("The value after b: %d\n",b);
    return 0;
}
