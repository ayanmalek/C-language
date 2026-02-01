#include<stdio.h>
#include<conio.h>
void main()
{
	int ecode;
	float net,basic,da , ma,pf,it;
	char n[20];

	clrscr();

     printf("Enter employee code:");
     scanf("%d",&ecode);

     flushall();

     printf("Enter basic salory: ");
     scanf("%f",&basic);

     flushall();

     printf("Enter employe name :");
     scanf("%s",&n);


	 if(ecode>=1 && ecode<=5)
	 {
		da=basic*67/100;
		ma=basic*12/100;
		pf=basic*10/100;
		it=basic*15/100;
	 }

	else if(ecode>=6 && ecode<=12)
	 {
		da=basic*62/100;
		ma=basic*10/100;
		pf=basic*9/100;
		it=basic*10/100;
	 }

	else  if(ecode>=13 && ecode<=15)
	 {
		da=basic*55/100;
		ma=basic*8/100;
		pf=basic*8/100;
		it=basic*8/100;
	 }
	else
	printf("please enter nomber beatween 1 to 15");

       net=basic+da+ma-pf-it;

    printf("\n \n **************** Salary Slip ****************");
    printf("\n ______________________________________________");
    printf("\n employe code: %d",ecode);
    printf("\t employe name is :%s",n);
    printf("\n ______________________________________________");
    printf("\n Allowances Dedutions");
    printf("\n ______________________________________________");
    printf("\n Basic:%2f",basic);
    printf("\t \t Pf: %2f ",pf);
    printf("\n Da: %2f",da);
    printf("\t \t It :%2f",it);
    printf("\n Ma:%2f",ma);
    printf("\n ______________________________________________");
    printf("\n \t net salary : %2f ",net);
    printf("\n ______________________________________________");


    getch();
}