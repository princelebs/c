/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int x=0,y=0,count=1;
  clrscr();
  for(x=1;x<=5;x++)
  {
    for(y=1;y<=x;y++)
    {
      printf("%4d",count);
      count++;
    }
    printf("\n");
  }
  getch();
}