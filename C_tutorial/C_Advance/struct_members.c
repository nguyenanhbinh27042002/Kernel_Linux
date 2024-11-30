#include "stdio.h"
#include "stdlib.h"
#include "string.h"

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
	printf("Employee 2 is name %s\n",emp2.name);

	strcpy(emp1.name,"Join");
	emp1.id = 456;

	printf("Id of members %d\n",emp1.id);
	printf("The name of members 1 %s\n",emp1.name);
return 0;

}
