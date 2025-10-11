/*
A
B A
C B A
D C B A
E D C B A
F E D C B A*/
#include<stdio.h>
#include<conio.h>
void main()
{
  char x=' ',y=' ';
  clrscr();
  for(x='A';x<='F';x++)
  {
    for(y=x;y>='A';y--)
    {
      printf("%2c",y);
    }
    printf("\n");
  }


getch();
}