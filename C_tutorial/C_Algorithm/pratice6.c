#include "stdio.h"
#include "stdlib.h"
#define LOWER 0
#define UPPER 100
int test(int x, int y) {
    return (x< LOWER && y> UPPER)||(y<LOWER && x<UPPER);
}
int main(){
    printf("%d\n",test(20,100));
    printf("%d\n",test(-1,120));
    printf("%d\n",test(120,-1));
    return 0;
}