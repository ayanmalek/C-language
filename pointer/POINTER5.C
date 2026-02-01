#include<stdio.h>
#include<conio.h>
void main()
{
int a,rev=0,r;
int *ptr1;

clrscr();

 printf("Enter value of a ::");
 scanf("%d",&a);

 ptr1=&a;
 while(*ptr1>0)
 {
    r=*ptr1%10;
    rev=(rev*10)+r;
    *ptr1=*ptr1/10;
 }
 printf("\nThe value after revrse ::%d",rev);

getch();
}

