/*
15 14 13 12 11
10 9 8 7
6 5 4
3 2
1*/
#include <stdio.h>
#include <conio.h>
void main()
{
	int x=0,y=0,count=15;
	clrscr();
	for(x=1;x<=5;x++)
	{
		for(y=x;y<=5;y++)
		{
		printf("%4d",count);
		count--;
		}
	printf("\n");
	}
	getch();
}
