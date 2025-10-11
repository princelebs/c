/*
F E D C B A
E D C B A
D C B A
C B A
B A
A*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int x=' ',y=' ';
  clrscr();
  for(x='F';x>='A';x--)
  {
    for(y=x;y>='A';y--)
    {
      printf("%2c",y);
    }
    printf("\n");
  }


getch();
}