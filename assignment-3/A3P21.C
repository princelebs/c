#include<stdio.h>
#include<conio.h>
void main()
{
	int n=0,x=0,result=0,cnum=0,remider=0;
	clrscr();
	printf("Input n:");
	scanf("%d",&n);
	for(x = 1; x <= n; x++)
	{
		result=0;
		cnum = x;
		while(cnum!=0)
		{
			remider=cnum%10;
			result+=remider*remider*remider;
			cnum=cnum/10;
		}
		if(result == x)
		{
			printf("\n %d", x);
		}
	}
	getch();

}