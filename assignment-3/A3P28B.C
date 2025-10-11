/*
A
B B
C C C
D D D D
E E E E E
F F F F F F*/
#include<stdio.h>
#include<conio.h>
void main()
{
  char x=' ',y=' ';
  clrscr();
  for(x='A';x<='F';x++)
  {
    for(y='A';y<=x;y++)
    {
      printf("%2c",x);
    }
    printf("\n");
  }


getch();
}