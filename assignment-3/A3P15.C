#include<stdio.h>
#include<conio.h>
void main()
{
	int rodd=0,reven=0,num=0,digit=0;
	clrscr();
	printf("Input a Number :");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		if(digit%2==0)
		{
			reven=reven*10+digit;
		}
		else
		{
			rodd=rodd*10+digit;
		}
		num=num/10;
	}

	printf("\n Reverse Odd Number = %d",rodd);
	printf("\n Reverse Even Number = %d",reven);
	getch();

}