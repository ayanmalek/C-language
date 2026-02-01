#include<stdio.h>
#include<conio.h>
void main()
{
   int rno,sub1,sub2,sub3,total=0,count=0;
   char sn[100];
   float pre=0;
   clrscr();
    printf("Enter Student roll number:");
    scanf("%d",&rno);

    flushall();

    printf("Enter Student Name:");
    scanf("%s",&sn);

    flushall();

    printf("Enter the marks of sub1:");
    scanf("%d",&sub1);

    printf("Enter the marks of sub2:");
    scanf("%d",&sub2);

    printf("Enter the marks of sub3:");
    scanf("%d",&sub3);

    if (sub1<40)
	count++;
    if (sub<40)
	count++;
    if (sub3<40)
	count++;

    if (count>=1 && count<=2)
	printf("Result=ATKT");
    else if (count>=3)
	printf("Result = Fail");
    else
    {  total=sub1+sub2+sub3;
       printf("\n student rno is =%d:",rno);
       printf("\n student name is =%s:",sn);
       printf("\n Total=%d:",total);
       pre=total/3;
       printf("\n pre is =%.2f:",pre);

       if (pre>=70 && pre<=100)
       printf("\n Result =  Distinction");
       else if (pre>=60 && pre<=69)
       printf("\n Result =  First class");
       else if (pre>=50 && pre<=59)
       printf("\n Result =  Second class");
       else if (pre>=40 && pre<=49)
       printf("\n Result =  Pass class");





    }


   getch();
}