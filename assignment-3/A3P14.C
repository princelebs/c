#include<stdio.h>
#include<conio.h>
void main()
{
	int num=0,rnum=0,digit=0,cnum=0;
	clrscr();
	printf("Input a Number:");
	scanf("%d",&num);
	cnum = num;
	while(num!=0)
	{
		digit=num%10;
		rnum=rnum*10+digit;
		num=num/10;
	}
	if(rnum == cnum)
		{
			printf("%d Number is a palindrom ",cnum);
		}
		else
		{
			printf("%d Number is not a palindrom",cnum);
		}
	getch();

}