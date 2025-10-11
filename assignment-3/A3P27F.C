/*
5 4 3 2 1
 4 3 2 1
  3 2 1
   2 1
    1*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int x=0,y=0;
  clrscr();
  for(x=5;x>=1;x--)
  {
    for(y=5;y>=x;y--)
    {
      printf(" ");
    }
    for(y=x;y>=1;y--)
    {
      printf("%2d",y);
    }
    printf("\n");
  }


getch();
}