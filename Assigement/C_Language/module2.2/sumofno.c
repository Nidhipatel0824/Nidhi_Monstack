//Write a program make a summation of given number


#include<stdio.h>
main()
{
	int i,num,num1,sum=0;
	printf("Enter NUmber  : ");
	scanf("%d",&num);
	
	
	for (i=1;i<=num;i++)
	{
		printf("Enter Number   %d : ",i);
		scanf("%d",&num1);
		sum+=num1;
	}
	printf(" \n Total Sum is  %d:",sum);
}
