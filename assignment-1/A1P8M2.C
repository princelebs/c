#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	printf("enter num1 ;");
	scanf("%d",&x);
	printf("enter num2 ;");
	scanf("%d",&y);
	z=x;
	x=y;
	y=z;
	printf("\n%d",x);
	printf("\n%d",y);

	getch();
}
