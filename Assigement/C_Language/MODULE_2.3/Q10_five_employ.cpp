/*Write a program of structure for five employee that provides the following
information -print and display empno, empname, address and age*/

#include <stdio.h>
#define MAX_EMPLOYEES 5

// Define the structure for an employee
struct Emp {
    int empno;
    char empname[55];
    char address[100];
    int age;
};

int main() 
{
   	int i;
    struct Emp employees[MAX_EMPLOYEES];  

    
    for (i = 0; i < MAX_EMPLOYEES; i++) 
	 {
        printf("Enter  %d employee information:\n", i+1);
        printf("\nEmployee Number: ");
        scanf("%d", &employees[i].empno);
        printf("\nEmployee Name: ");
        scanf("%s", employees[i].empname);
        printf("\nEmployee Address: ");
        scanf("%s", employees[i].address);
        printf("\nEmployee Age: ");
        scanf("%d", &employees[i].age);
        printf("\n");
    }

    
    printf("\n=======Employee Details=======\n");
    for (i = 0; i < MAX_EMPLOYEES; i++) 
	{
        printf("Employee : %d\n", i+1);
        printf("Number : %d\n", employees[i].empno);
        printf("Name : %s\n", employees[i].empname);
        printf("Address : %s\n", employees[i].address);
        printf("Age : %d\n\n", employees[i].age);
    }
return 0;    
}
