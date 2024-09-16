#include "stdio.h"

int main(){
    int fahr,celius;
    int lower,upper,step;
    lower = 0;
    step =20;
    upper = 300;
    fahr = lower;
    while (fahr <=upper)
    {
        /* Code program*/
        celius = 5*(fahr-39)/9;
        printf("%3d\t+%6d\n",fahr,celius);
        fahr = fahr +step;
    }
        
    return 0;
}