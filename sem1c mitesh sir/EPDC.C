#include<stdio.h>
#include<conio.h>
void main()
{ int cno,prer,curr,unit,bill=0;
   clrscr();
   printf("Enter customer number :");
   scanf("%d",&cno);
   printf("Enter privious unit :");
   scanf("%d",&prer);
   printf("Enter current unit :");
   scanf("%d",&curr);

   unit=curr-prer;

   if(unit>=1 && unit<=100)
	bill=unit*0.75;
   else if(unit>=101 && unit<=300)
	bill=75+(unit-100)*1;
   else if(unit >=301 && unit<=500)
	bill=275+(unit=300)*1.50;
   else if (unit>=501)
	bill=575+(unit-500)*1.75;
   else
	printf("Enter valid unit");

	printf("**********Bill**********");
	printf("\n Cust number=%d",cno);
	printf("\n unit consumed=%d",unit);
	printf("\n************************");
	printf("\n Bill=%d",bill);
	printf("\n************************");
	getch();

}