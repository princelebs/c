/*
A A A A A A
B B B B B
C C C C
D D D
E E
F
*/
#include<stdio.h>
#include<conio.h>
void main()
{
  char x=' ',y=' ';
  clrscr();
  for(x='A';x<='F';x++)
  {
    for(y=x;y<='F';y++)
    {
      printf("%2c",x);
    }
    printf("\n");
  }


getch();
}