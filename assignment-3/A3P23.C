#include<stdio.h>
#include<conio.h>
void main()
{
	int num=1,n=0;
	long int fact=1;
	clrscr();
	printf("Input n :");
	scanf("%d",&n);
	while(num<=n)
	{
		fact=fact*num;
		printf("\n %ld",fact);
		num++;
	}

	getch();

}