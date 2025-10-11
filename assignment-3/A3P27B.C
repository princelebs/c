/*
5 5 5 5 5
 4 4 4 4
  3 3 3
   2 2
    1*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int x=0,y=0;
  clrscr();
  for(x=5;x>=1;x--)
  {
    for(y=x;y<=5;y++)
    {
      printf(" ");
    }
    for(y=1;y<=x;y++)
    {
      printf("%2d",x);
    }
    printf("\n");
  }


getch();
}