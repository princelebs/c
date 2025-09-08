#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,num3;
	clrscr();
	printf("enter num1 :");
	scanf("%d",&num1);
	printf("enter num2 :");
	scanf("%d",&num2);
	printf("enter num3 :");
	scanf("%d",&num3);
	if(num1>num2 && num1> num3)
	{
	    printf("num 1 is geretrest");
	}
	else if(num2>num1 && num2>num3)
	{
	     printf("num 2 is geretrest");
	}
	else
	{
	     printf("num 3 is geretrest");
	}
	getch();

}