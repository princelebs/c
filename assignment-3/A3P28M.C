/*
F
F E
F E D
F E D C
F E D C B
F E D C B A*/
#include<stdio.h>
#include<conio.h>
void main()
{
  char x=' ',y=' ';
  clrscr();
  for(x='F';x>='A';x--)
  {
    for(y='F';y>=x;y--)
    {
      printf("%2c",y);
    }
    printf("\n");
  }


getch();
}