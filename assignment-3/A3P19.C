#include<stdio.h>
#include<conio.h>
void main()
{
	int suodd=0,sueven=0,num=0,digit=0;
	clrscr();
	printf("Input a Number :");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		if(digit%2==0)
		{
		       sueven=sueven+digit;
		}
		else
		{
		       suodd=suodd+digit;
		}
		num=num/10;
	}

	printf("\n Odd Number = %d",suodd);
	printf("\n Even Number = %d",sueven);
	if(sueven==suodd)
	{
		printf("\n Sum of odd digits is equal to the sum of even digits");
	}
	else
	{
		printf("\n Sum of odd digits is not equal to the sum of even digits");
	}
	getch();

}