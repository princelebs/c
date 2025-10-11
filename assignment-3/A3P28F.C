/*
A B C D E F
A B C D E
A B C D
A B C
A B
A */
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
      printf("%2c",y);
    }
    printf("\n");
  }


getch();
}