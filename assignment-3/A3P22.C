#include<stdio.h>
#include<conio.h>
void main()
{
	int num=0,fact=1;
	clrscr();
	printf("Input a Number :");
	scanf("%d",&num);
	while(num>=1)
	{
		fact=fact*num;
		num--;
	}
	printf("\n Factorial number = %d",fact);
	getch();
}