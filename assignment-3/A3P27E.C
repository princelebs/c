/*
1 2 3 4 5
 1 2 3 4
  1 2 3
   1 2
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
      printf("%2d",y);
    }
    printf("\n");
  }


getch();
}