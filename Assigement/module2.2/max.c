//Write a program to find out the max from given number
#include<stdio.h>
main()
{
	int i,a,n,max=0;
	printf("Enter Any Number  :");
	scanf("%d",&a);
	
	for (i=1;i<=a;i++)
	{
		printf( "Enter value %d   ",i);
		scanf("%d",&n);
		if(n>max)
		{
			max=n;
		}
		
	}
	printf("Maximum Value is  :%d",max);
}

