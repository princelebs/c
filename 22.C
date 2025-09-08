#include<stdio.h>
#include<conio.h>
void main()
{
	int num=0,digit=0,sum=0;
	clrscr();
	printf("enter number : ");
	scanf("%d",&num);

	while(num>0)
	{
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}
	printf("sum of digit :%d",sum);
	getch();
}