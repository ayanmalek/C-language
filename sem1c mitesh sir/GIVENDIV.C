#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0;
	clrscr();

	printf("enter a:");
	scanf("%d",&a);

	printf("enter b:");
	scanf("%d",&b);

	c=a/b;
	printf("ans=%d",c);
	getch();

}