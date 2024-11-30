#include "stdio.h"  
#include "stdlib.h"

int test (int x) {
    return (abs(100-x)<=10)||(abs(200-x)<=20);
}
int main() {
    printf("%d\n",test(103));
    printf("%d\n",test(90));
    printf("%d\n",test(89));
    return 0;
}