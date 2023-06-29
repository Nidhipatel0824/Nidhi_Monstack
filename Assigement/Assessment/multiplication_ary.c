//Write a program to make multiplication of 2-D Matrix

#include<stdio.h>
int main()
{
	int a[2][2]; //	//array initizlization
	int b[2][2],c[2][2];
	int i,j,k;
	printf("==========Enter First matrix elements====\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		
			printf("Enter  element [%d][%d] : " ,i,j);
			scanf("%d",&a[i][j]);
		}	
	}
	printf("======Enter Second matrix elements====\n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		
			printf("Enter element [%d][%d] : ",i,j );
			scanf("%d",&b[i][j]);
		}	
	}  
	printf("=========First matrix array========\n");
	for(i=0;i<2;i++)  //to print first matrix
	{
		for(j=0;j<2;j++)
		{
			
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	printf("=========Second matrix array========\n");
	for(i=0;i<2;i++)   //to print second mat.
	{
		for(j=0;j<2;j++)
		{
			
			printf(" %d",b[i][j]);
		}
		printf("\n");
	}
	printf("========================Result matrix===============\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=0;
			for(k=0;k<2;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<2;i++)   //to print second mat.
	{
		for(j=0;j<2;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
}
