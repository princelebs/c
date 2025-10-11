#include<stdio.h>
#include<conio.h>
void main()
{
	int num=0,result=0,cnum=0,remider=0;
	clrscr();
	printf("Input a Number:");
	scanf("%d",&num);
	cnum = num;
	while(num!=0)
	{
		remider=num%10;
		result+=remider*remider*remider;
		num=num/10;
	}
	if(result == cnum)
		{
			printf("%d is Armstrog number",cnum);
		}
		else
		{
			printf("%d is not Armstrog number",cnum);
		}
	getch();

}