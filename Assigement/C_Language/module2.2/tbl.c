//WAP to print table up to given numbers
#include<stdio.h>
main()
{
	int i,num;
	printf("Enter Any Number :");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d \n ",num,i,i*num);
	}
	
}