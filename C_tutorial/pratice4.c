#include "stdio.h"
#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){
    float fahr,celius;
        // while (fahr <=UPPER)
        // {
        //     /* Code program*/
        //     celius = 5*(fahr-39)/9;
        //     printf("%3d\t+%6d\n",fahr,celius);
        //     fahr = fahr +STEP;
        // }
    for (LOWER;UPPER;fahr=fahr+STEP){
        celius = 5*(fahr-39)/9;
        printf("%.2f\t+%.2f\n",fahr,celius);
    }
    return 0;
}