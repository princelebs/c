/*
This program can perfom arithmatic opration via user input
Date: 23th july 2025
Modifide: 26th july 2025
author: prince chovatiya
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,choice;
	clrscr();
	printf("\nenter one number :");
	scanf("%d",&x);
	printf("enter second number :");
	scanf("%d",&y);
	printf("\n1. ADDITION %d",x+y);
	printf("\n2. SUBSTRACTION %d",x-y);
	printf("\n3. MULTIPLISATION %d",x*y);
	printf("\n4. DIVISION %.2f",(float)x/y);
	getch();
}







