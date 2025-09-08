#include<stdio.h>
#include<conio.h>
void main()
{
	float pi=3.14,r,ac;
	clrscr();
	printf("enter radious :");
	scanf("%f",&r);
	ac=pi*r*r;
	printf("area of circle :%.2f",ac);
	getch();

}