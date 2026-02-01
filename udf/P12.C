#include<stdio.h>
#include<conio.h>
struct stude
{
int no,m1,m2,m3;
char name[100];
}s1;


void main()
{

	float per;
	int total;
	clrscr();

		printf("Enter student name hear:");
		scanf("%s",&s1.name);

		printf("Enter studeant Number:");
		scanf("%d",&s1.no);

		printf("Enter marks for sub 1:");
		scanf("%d",&s1.m1);

		printf("Enter marks for sub 2:");
		scanf("%d",&s1.m2);

		printf("Enter marks for sub 3:");
		scanf("%d",&s1.m3);


		total=s1.m1+s1.m2+s1.m3;
		per=total/3;


		printf("\n\nstudent no=>%d\t\t student name=>%s",s1.no,s1.name);

		printf("\n***************************************************");

		printf("\n marks of sub 1==>%d",s1.m1);
		printf("\n marks of sub 2==>%d",s1.m2);
		printf("\n marks of sub 3==>%d",s1.m3);

		printf("\n\nTotal marks is==>%d",total);
		printf("\tpersantage is==>%.2f",per);

		printf("\n****************************************************");

		getch();
}


