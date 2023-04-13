// WAP to print factorial of given number


#include<stdio.h>
main()
{
	int i,fct=1,num;
	printf("Enter Any Number  :");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fct=fct*i;
		
	}
	printf("Factorial of %d %d",num,fct);
}
