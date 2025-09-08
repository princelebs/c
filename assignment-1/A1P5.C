/*
 This program calculates the area of a circle
 Date: 29th july 2025
 author: prince chovatiya 
 */

#include<stdio.h>
#include<conio.h>
void main()
{
	const float pi = 3.14;	// Constant Variable
	int r;
	float AC;
       clrscr();
       printf("enter number :");
       scanf("%d",&r);
       AC=pi*r*r;
       printf("area of circle: %.2f",AC);
       getch();



}