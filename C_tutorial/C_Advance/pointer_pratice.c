// #include "stdio.h"
// #include "stdlib.h"


// int main(){
//     int a = 5;
//     int *p;
//     p = &a;
//     printf("%p \n",&a);
//     printf("%p \n",p);
//     printf("%d \n",a);
//     printf("%d \n",*p);
//     return 0;
// } 

#include "stdio.h"
#include "stdlib.h"

int main(){
    int grade1 = 80, grade2 = 100;
    printf("value of grade1 : %d \n",grade1);
    printf("value of grade2: %d \n",grade2);

    printf("Address of the grade1 %p\n",&grade1);
    printf("Address of the grade2 %p\n",&grade2);
    return 0;
}