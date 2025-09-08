#include<stdio.h>
#include<conio.h>
void main()
{
	int mark1,mark2,mark3,mark4,total;
	float per;
	clrscr();
	printf("enter your mathes mark :");
	scanf("%d",&mark1);
	printf("enter your c mark :");
	scanf("%d",&mark2);
	printf("enter your html mark :");
	scanf("%d",&mark3);
	printf("enter your cf mark :");
	scanf("%d",&mark4);
	total=mark1+mark2+mark3+mark4;
	per = total/4.0;
	printf("\n Total: %d",total);
	printf("\n Percentage: %.2f",per);
	if(per>=90)
	{
		printf("you get A+");
	}
	else if(per>=80)
	{
		printf("you get A");
	}
	else if(per>=70)
	{
		printf("you get B+");
	}
	else if(per>=60)
	{
		printf("you get B");
	}
	else if(per>=50)
	{
		printf("you get C");
	}
	else if(per>=40)
	{
		printf("you get d");
	}
	else
	{
		printf("you get fail");
	}

	getch();


}