#include<stdio.h>
#include<conio.h>
void main()
{
	float pi=3.14,r,cc;
	clrscr();
	printf("enter radious :");
	scanf("%f",&r);
	cc= 2*(pi*r);
	printf("circumference of circle :%.2f",cc);
	getch();

}