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
	if(num1>num2)
	{       if(num1>num3)
		{
			printf("num1 is gereterest");
		}
		else
		{
			printf("num 3 is geretrest");
		}
	}

	else
	{
		 if(num2>num3)
		 {
			printf("num2 is gereterest");
		 }
		 else
		 {
			printf("num3 is gereterst");
		 }

	}
	getch();

}