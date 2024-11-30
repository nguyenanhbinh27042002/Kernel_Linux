#include "stdio.h"

int test(int x, int y){
    return (x==30|| y==30|| (x+y)==30);
}
int main(){
    printf("%d\n",test(20,21));
    printf("%d\n",test(25,5));
    printf("%d\n",test(30,1));
    return 0;
}