// WAP to print Fibonacci series up to given number

#include<stdio.h>
main()
{
	int n1,n2,n3,n,i;
	n1=0,n2=1;
	printf("Enter Number");
	scanf("%d",&n);
	printf("Fibonacci Series :%d %d",n1,n2);
	 for(i=2;i<=n;i++)
	 {
	 	n3=n1+n2;
	 	
	 	n1=n2;
	 	n2=n3;
	 	printf("  %d  ",n3);
	 }
	
}