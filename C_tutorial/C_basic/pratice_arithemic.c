#include "stdio.h"
#include "stdlib.h"

/* Formula : Sn = (a1+an)*n/2 */
int main() {
    float a1,d,an,Sn;
    int n;
    printf("Enter the Initail term \n");
    scanf("%f",&a1);
    printf("Enter the difference in the Arithmetic Sequence: \n");
    scanf("%f",&an);
    printf("Enter the number of elements in the Arithmetic Sequence: \n");
    scanf("%d",&n);

    Sn = (a1+an)*n/2;
    printf("Sum of your sequence %f\n",Sn);


    return 0;
}