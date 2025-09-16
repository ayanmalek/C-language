#include<stdio.h>
#include<conio.h>
int main()
{
	int bill, lc,sc,ic,ls,ss,is;
	
	clrscr();
	printf("enter locan call :");
	scanf("%d",&lc);
	printf("enter std  call :");
	scanf("%d",&sc);
	printf("enter internationl call :");
	scanf("%d",&ic);
	printf("enter locan sms :");
	scanf("%d",&ls);
	printf("enter std sms:");
	scanf("%d",&ss);
	printf("enter international sms:");
	scanf("%d",&is);
	
	{
		lc=lc*2;
		sc=sc*1;
		ic=ic*10;
		ls=ls*1;
		ss=ss*1;
		is=is*5;
		
		bill= lc+sc+ic+ls+ss+is;
	}
	printf("bill is =%d",bill);
	
	
	
}
