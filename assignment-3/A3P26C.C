#include<stdio.h>
#include<conio.h>
void main()
{
	int x=0,y=0,n=0;
	clrscr();
	printf("Input n :");
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	{
		for(y=1;y<=x;y++)
		{
			printf("%3d",y);
		}
		printf("\n");
	}

	getch();
}