/*
A B C D E F
B C D E F
C D E F
D E F
E F
F*/
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
      printf("%2c",y);
    }
    printf("\n");
  }


getch();
}