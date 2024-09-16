#include "stdio.h"
#include "math.h"
#define pi 3.14
float radius,diameter ,area,perimeter;
int main(){
    radius=5.0;
    diameter = 2*radius;
    area = pi*radius*radius;
    printf("Area of circle %.2f \n",area);

    perimeter = 2*pi*radius;
    printf("Perimeter of circle %.2f\n",perimeter);
    return 0;
}