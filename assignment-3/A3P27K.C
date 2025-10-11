/*
    5
   4 5
  3 4 5
 2 3 4 5
1 2 3 4 5*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int x=0,y=0;
  clrscr();
  for(x=5;x>=1;x--)
  {
    for(y=1;y<=x;y++)
    {
      printf(" ");
    }
    for(y=x;y<=5;y++)
    {
      printf("%2d",y);
    }
    printf("\n");
  }


getch();
}