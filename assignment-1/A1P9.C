/*
This program can print sum of 3 digits that was inputed by user
Date: 31th july 2025
Author: prince chovatiya
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int num=0,digit=0,sum=0;
	clrscr();
	printf("enter number : ");
	scanf("%d",&num);

	digit=num%10;
	sum=sum+digit;
	num=num/10;

	digit=num%10;
	sum=sum+digit;
	num=num/10;

	digit=num%10;
	sum=sum+digit;
	num=num/10;

	printf("sum of digit :%d",sum);
	getch();
}