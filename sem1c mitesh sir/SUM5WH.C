#include<stdio.h>
#include<conio.h>
void main()
{      int i=1,n,sum=0;
	clrscr();
	printf("enter you number :");
	scanf("%d",&n);


	do
	{

	   sum=sum+i;
	   i++;
	}while(i<=n);
	printf("%d",sum);

	getch();


}