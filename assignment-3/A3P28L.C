/*
F
E F
D E F
C D E F
B C D E F
A B C D E F*/
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
      printf("%2c",y);
    }
    printf("\n");
  }


getch();
}