#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("Enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 for(j=1;j<=n;j++)
	 {
		 if(i==1||j==1||j==n||i==n)
			printf(" *");
		 else
			printf("  ");
	 }
		printf("\n");
	}
	getch();
}