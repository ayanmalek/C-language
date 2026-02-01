#include<stdio.h>
#include<conio.h>
void main()
{ int n;
	clrscr();

	printf("enter value of number: ");
	scanf("%d",&n);

	if(n>0)
		printf(" number %d is positive ",n);

       else if (n<0)
		    printf("number %d is negitive",n);
       else
		printf("number %d is zero",n);

		getch();
}