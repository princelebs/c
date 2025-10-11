/*
	A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A*/
#include<stdio.h>
#include<conio.h>
void main()
{
  char x=' ',y=' ';
  clrscr();
  for(x='A';x<='E';x++)
  {
    for(y=x;y<='E';y++)
    {
      printf("  ");
    }
    for(y='A';y<=x-1;y++)
    {
      printf("%2c",y);
    }
    for(y=x;y>='A';y--)
    {
      printf("%2c",y);
    }
    printf("\n");
  }


getch();
}