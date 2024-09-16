#include "stdio.h"

int weight;
int height;
int area;
int perimeter;
int main(){
    height = 5;
    weight = 7;
    perimeter = 2*(weight+height);
    printf("Perimeter of rectangle %d \n",perimeter);
    area = weight*height;
    printf("Area of rectangle %d \n",area);
    return 0;
}