#include "stdio.h"

int test(int x, int y) {
    return x==y? (x+y)*3:(x+y);
};
// int test(int x,int y);
int main(){
    printf("%d\n",test(1,2));
    printf("%d\n",test(2,2));
    return 0;
}