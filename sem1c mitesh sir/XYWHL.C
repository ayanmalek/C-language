#include<stdio.h>
#include<conio.h>
void main()
{
	int  base,expo,power=1,i=1;

	clrscr();
	printf("enter value for base:");
	scanf ("%d",&base);

	printf("enter value for exponent:");
	scanf ("%d",&expo);

	while(i<=expo)
	{
		power=power*base;
		i++ ;
	} printf("ans=%d",power);
	getch();
}





