#include<stdio.h>
#include<conio.h>
void main()
{
	float n1,n2,n3,n4,n5,avg=0;
	clrscr();

	printf("enter value of number 1 :");
	scanf("%f",&n1);

	printf(" \n enter value of number 2 :");
	scanf("%f",&n2);


	printf("\n enter value of number 3 :");
	scanf("%f",&n3);

	printf("\n enter value of number 4 :");
	scanf("%f",&n4);

	printf("\n enter value of number 5 :");
	scanf("%f",&n5);

	avg=(n1+n2+n3+n4+n5)/5;

	printf(" \n ans is %.2f",avg);


	getch();
}
