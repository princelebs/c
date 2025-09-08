#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("enter your age :");
	scanf("%d",&age);
	if(age<18)
		printf("you are not eligable for voting");
	if(age>=18)
		printf("you are eligable for voting");
	getch();

}