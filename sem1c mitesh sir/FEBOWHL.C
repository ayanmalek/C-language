#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,n,a=1,b=0,c=0;
	printf("Enter number :");
	scanf("%d",&n);

	while(i<n)
       {	printf("%d",c);
		c=a+b;
		a=b;
		b=c;
       }
       getch();
}