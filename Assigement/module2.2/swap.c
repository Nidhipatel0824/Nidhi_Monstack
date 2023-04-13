// Swap to number without third variable


#include<stdio.h>
main()
{
	int a,b;
	printf("Enter value of A nad B");
	scanf("%d %d",&a,&b);
	printf("Before Swapping Number  : %d %d",a,b);
	
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After Swapping  :%d %d",a,b);	
	
}