//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include<stdio.h>
int main()
{
	printf("=======MENU=======\n");
	printf("(1) Addition\n");
	printf("(2) Substraction\n");
	printf("(3) Multiplication\n");
	printf("(4) Division\n");
	
	int num,n1,n2;
	float n3,n4;
	
	printf("\nEnter your choice : ");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1 :
			printf("Enter first number : ");
			scanf("%d",&n1);
			printf("Enter second number : ");
			scanf("%d",&n2);
			printf("\nYour Addition is : %d",n1+n2);
			break;
		case 2 :
			printf("\nEnter first number : ");
			scanf("%d",&n1);
			printf("Enter second number : ");
			scanf("%d",&n2);
			printf("\nYour Substraction is : %d",n1-n2);
			break;
		case 3 :
			printf("\nEnter first number : ");
			scanf("%d",&n1);
			printf("Enter second number : ");
			scanf("%d",&n2);
			printf("\nYour Multiplication is : %d",n1*n2);
			break;
		case 4 :
			printf("\nEnter first number : ");
			scanf("%f",&n3);
			printf("Enter second number : ");
			scanf("%f",&n4);
			printf("\nYour Division is : %f",n3/n4);
			break;
		default :
			printf("Invalid input!!");
			break;
	}
	return 0;
} 

