#include "stdio.h"
#include "stdlib.h"

void printGreeting(){
	printf("Hello words \n");
}
void printMinMax(int num1, int num2){
	if (num1 < num2){
		printf("The maximun %d\n",num2);
		printf("The minimmun %d\n",num1);
	}
	else
		printf("The maximun %d\n",num1);
		printf("The minimun %d\n",num2);

}
int main(){
    int m, n;
    printf("Enter the number m:");
    scanf("%d",&m);
    printf("Enter the number n:");
    scanf("%d",&n);
    printMinMax(m,n);
    return 0;
}
