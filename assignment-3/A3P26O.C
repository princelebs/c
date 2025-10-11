/* *
   * *
   * * *
   * * * *
   * * * * *
*/
#include <stdio.h>
#include <conio.h>
void main()
{
	int x=0,y=0;
	clrscr();
	for(x=1;y<=5;x++)
	{
		for(y=1;y<=x;y++)
		{
			printf("%4c",'*');
		}
		printf("\n");
	}
	getch();
}