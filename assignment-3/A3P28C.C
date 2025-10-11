/*
F F F F F F
E E E E E
D D D D
C C C
B B
A*/
#include<stdio.h>
#include<conio.h>
void main()
{
  char x=' ',y=' ';
  clrscr();
  for(x='F';x>='A';x--)
  {
    for(y='A';y<=x;y++)
    {
      printf("%2c",x);
    }
    printf("\n");
  }


getch();
}