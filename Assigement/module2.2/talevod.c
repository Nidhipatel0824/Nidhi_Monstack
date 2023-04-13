/*WAP to take 10 no. Input from user and find out …
 How many Even numbers are there
 How many odd numbers are there
 Sum of even numbers
 Sum of odd numbers*/

#include<stdio.h>
main()
{
	
	int i,val,eve=0,odd=0,taleve=0,talodd=0;
	for(i=1;i<=10;i++)
	{
		printf("Enter Number");
		scanf("%d",&val);
		if(val%2==0)
		{
			eve+=1;
			taleve+=val;
		}
		else
		{
			odd+=1;
			talodd+=val;
		}
	}
	
	
	printf("Total Even Number %d \n",eve);
	printf("Total Odd  Number %d \n",odd);
	printf("Sum of  Even Number%d \n",taleve);
	printf("Sum of Odd Number %d \n",talodd);
}
