#include<stdio.h>
#include<conio.h>
void main()
{   int a,b,c;
    clrscr();
     printf("enter value of nuber 1 :");
     scanf("%d",&a);

     printf("enter value of number 2 :");
     scanf("%d",&b);

     a=b;
     b=c;
     c=a;

     printf("\n swaped numbers are :");
     printf(" \n now number 1 is %d ",a);
     printf("\n mow mumber 2 is %d ",b);

     getch();
 }