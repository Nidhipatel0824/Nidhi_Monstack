//WAP to find factorial using recursion.


#include<stdio.h>
double fact(int n)
{
	if(n<=0)
	{
		return 1;
	}
	return n*fact(n-1);
}
int main()
{
	int n;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	printf("Your Number is : %d \n",n);
	
	printf("Factorial of %d : %lf",n,fact(n));	
	return 0;
}


