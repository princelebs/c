/*
This program inputs marks of 4 subjects for 3 students, calculates total and percentage,
and assigns grade based on percentage using if statements
Date: 7th Aug 2025
author: prince chovatiya
*/


#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2;
	clrscr();
	printf("enter num1 :");
	scanf("%d",&num1);
	printf("enter num2 :");
	scanf("%d",&num2);
	if(num1>num2)
	{
		printf("%d is gereter than num2",num1);
	}
       else if(num2>num1)
       {
		printf("%d is greter than num1",num2);
       }
       else
       {
		printf("num1 is equal num2 ");
       }
	getch();


}