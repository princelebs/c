/*
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5*/
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