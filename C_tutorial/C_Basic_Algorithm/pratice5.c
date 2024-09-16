#include "stdio.h"
#include  "stdlib.h"

int test(int n){
    return (n%3==0||n%7==0);
}
int main(){
    printf("%d\n",test(45));
    printf("%d\n",test(14));
    printf("%d\n",test(3));
    printf("%d\n",test(16));
    return 0;
}