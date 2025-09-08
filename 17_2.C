#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2;
	clrscr();
	printf("enter num1 :");
	scanf("%d",&num1);
	printf("enter num2 :");
	scanf("%d",&num2);
	(num1>num2)?
		printf("%d is gereter than num2",num1)
       :(num2>num1)?
		printf("%d is greter than num1",num2)
       :
		printf("num1 is equal num2 ");
	getch();


}