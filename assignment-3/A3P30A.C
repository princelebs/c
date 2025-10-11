/*
	1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1 */
#include<stdio.h>
#include<conio.h>
void main()
{
  int x=0,y=0;
  clrscr();
  for(x=1;x<=5;x++)
  {
    for(y=x;y<=5;y++)
    {
      printf("  ");
    }
    for(y=1;y<=x-1;y++)
    {
      printf("%2d",y);
    }
    for(y=x;y>=1;y--)
    {
      printf("%2d",y);
    }
    printf("\n");
  }


getch();
}