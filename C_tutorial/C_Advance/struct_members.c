#include "stdio.h"
#include "stdlib.h"

typedef struct employee{
	char name[10];
	float age;
	int  id;
}Employee;

int main(){
	Employee emp1;
	Employee emp2 = {"Jake",25.4,123};

	emp1 = emp2;
	printf("Employee 1 is name %s\n",emp1.name);

return 0;

}
