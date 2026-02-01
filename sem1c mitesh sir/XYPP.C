#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;

	clrscr();
	printf("enter number:");
	scanf ("%d",&n);
	for(i=n;i>=n;i--)
	{ for(j=n;j>=i;j--)
	{
	   printf(" %d",j);
	}

	}

	printf("\n");
	getch();
}





