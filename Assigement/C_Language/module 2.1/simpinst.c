#include<stdio.h>
main()
{
	
	printf("Simple interest\n \n");
	
	float p,r,t,ans;
	
	printf("Enter amount");
	scanf("%f",&p);
	printf("Enter rate");
	scanf("%f",&r);
	printf("Enter time");
	scanf("%f",&t);
	
                  	
	ans=p*r*t/100;       
	printf("answer=%f",ans);
	
	
	
		
}