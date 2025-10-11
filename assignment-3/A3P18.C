#include<stdio.h>
#include<conio.h>
void main()
{
	int odd=0,even=0,num=0,digit=0;
	clrscr();
	printf("Input a Number :");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		if(digit%2==0)
		{
			even=even+digit;
		}
		else
		{
			odd=odd+digit;
		}
		num=num/10;
	}

	printf("\n Odd Number = %d",odd);
	printf("\n Even Number = %d",even);
	getch();

}