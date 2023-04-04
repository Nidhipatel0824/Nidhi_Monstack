//Area of Circle rectangle tringle 

#include<stdio.h>
main()
{
		int r;
		float pi=3.14,ca,lnt,wit,ra,base,heigt,ta;
		printf("CIRCLE \n \n ");
		printf("Enter Radius of circle:");
		scanf("%d",&r);
		ca=pi*r*r;
		printf("Area of Circle=%f:\n \n \n ",ca);
		
		
		printf("RECTANGLE \n \n");
		printf("Enter Length of Rectangle  :  \n ");
		scanf("%f",&lnt);
		printf("Enter Width of Rectangle  : \n ");
		scanf("%f",&wit);
		ra=lnt*wit;
		printf("Area of Rectangle :%f\n \n \n ",ra);
		
		
		printf("TRIANGLE \n \n  ");
		printf("Enter base of tringle  :  \n ");
		scanf("%f",&base);
		printf("Enter height of triangle  : \n");
		scanf("%f",&heigt);
		ta=base*heigt/2;
		printf("Area of Rectangle :%f",ta);
			
		
		
		
}