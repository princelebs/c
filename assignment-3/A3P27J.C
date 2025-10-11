/*
5 4 3 2 1
 5 4 3 2
  5 4 3
   5 4
    5*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int x=0,y=0;
  clrscr();
  for(x=1;x<=5;x++)
  {
     for(y=x;y>=1;y--)
    {
      printf(" ");
    }
    for(y=5;y>=x;y--)
    {
      printf("%2d",y);
    }
    printf("\n");
  }


getch();
}