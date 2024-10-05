#include "stdio.h"

int test (int n){
    const int x = 51;
    return (n>x)?(n-x)*3:(x-n);
}
int main(){
    printf("%d\n",test(51));
    printf("%d\n",test(52));
    printf("%d\n",test(49));
    return 0;
}