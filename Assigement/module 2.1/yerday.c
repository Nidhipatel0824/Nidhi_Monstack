#include<stdio.h>
main()
{
	float day,yer;
	printf("Enter Days : \n");
	scanf("%f",&day);
	yer=day/365;
	printf("Total Year : %f \n ",yer);
	
	printf("Enter Year :\n");
	scanf("%f",&yer);
	day=yer*365;
	printf("Total Days :%f",day);
}