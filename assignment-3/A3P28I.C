/*
F
E E
D D D
C C C C
B B B B B
A A A A A A*/
#include<stdio.h>
#include<conio.h>
void main()
{
  char x=' ',y=' ';
  clrscr();
  for(x='F';x>='A';x--)
  {
    for(y=x;y<='F';y++)
    {
      printf("%2c",x);
    }
    printf("\n");
  }


getch();
}