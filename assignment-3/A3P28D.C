/*
A
A B
A B C
A B C D
A B C D E
A B C D E F*/
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
      printf("%2c",y);
    }
    printf("\n");
  }


getch();
}