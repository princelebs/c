/*
F E D C B A
F E D C B
F E D C
F E D
F E
F*/
#include<stdio.h>
#include<conio.h>
void main()
{
  char x=' ',y=' ';
  clrscr();
  for(x='A';x<='F';x++)
  {
    for(y='F';y>=x;y--)
    {
      printf("%2c",y);
    }
    printf("\n");
  }


getch();
}