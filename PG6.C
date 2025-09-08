#include<stdio.h>
#include<conio.h>
void main()
{
	float p,r,n,si;
	clrscr();
	printf("enter amount :");
	scanf("%f",&p);
	printf("enter rate :");
	scanf("%f",&r);
	printf("enter number of year :");
	scanf("%f",&n);
	si=(p*r*n)/100;
	printf("simpal interest : %.2f",si);
	getch();

}