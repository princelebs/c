/*
This program calculates the circumstances of a circle
Date: 29th july 2025
author: prince chovatiya 
*/

#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main()
{
	float r,c;
	clrscr();
	printf("enter radious :");
	scanf("%f",&r);
	c= 2*(pi*r);
	printf("circumference of circle :%.2f",c);
	getch();

}