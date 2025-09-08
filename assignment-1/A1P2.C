/*
This program can input makrs of subjects then perform total and gives persentage as output and also assign grade in the base of marks
Date: 22th july 2025
author: prince chovatiya
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int sub1,sub2,sub3,sub4,total;
	float per;
	clrscr();
	printf("enter your maths mark:");
	scanf("%d",&sub1);
	printf("enter your science mark:");
	scanf("%d",&sub2);
	printf("enter your englih mark:");
	scanf("%d",&sub3);
	printf("enter your hindi mark:");
	scanf("%d",&sub4);
	total=sub1+sub2+sub3+sub4;
	per=total/4.0;
	printf("\n total: %d",total);
	printf("\n percentage: %.2f",per);
	if(per>90)

		{
		printf("you get A+");
		}
	else if(per>80)
		{
		printf("you get A");
		}
	else if(per>70)
		{
		printf("you get B+");
		}
	else if(per>60)
		{
		printf("you get B");
		}
	else if(per>50)
		{
		printf("you get C+");
		}
	else if(per>40)
		{
		printf("you get C");
		}
	else
		{
		printf("you are fail");
		}

	getch();
}