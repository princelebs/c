#include <stdio.h>
#include <conio.h>
void main()
{
	char x=0,y=0;
	clrscr();
	for(x='A';x<='E';x++)
	{
	for(y='A';y<=x;y++)
		{

			printf("%4c");
		}

	printf("\n");
	}
	getch();
}