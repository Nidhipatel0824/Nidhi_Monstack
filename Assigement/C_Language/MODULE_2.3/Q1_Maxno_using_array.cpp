//Write a program to find out the max number from given array using function

#include<stdio.h>
int lar(int n,int a[]) // function declaration
{
	int i,max=(-1000);
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d Element : ",i+1);
		scanf("%d",&a[i]);
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}
int main()
{
	int num,i,a[100];
	
	printf("Enter number of array elements : ");
	scanf("%d",&num);
	
	printf("\nMaximum Element : %d",lar
	(num,a));
	
	return 0;
}



