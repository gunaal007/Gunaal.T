#include <stdio.h>

struct employee{
	char name[30];
	int age;
	int experience;
};
//struct employee e1;e1 is the Global variable	
void main()
{
	struct employee e1;           //e1 is the Local variable
	struct employee *ptr = &e1;          //Initialising the pointer variable for the Structure Employee
	printf("Address of the Name: %u",ptr -> name);
	printf("\nAddress of the Age: %u",ptr -> age);
	//Another method for pointing the members of Structure
	printf("\nAddress of the Experince: %u", (*ptr).experience);
}