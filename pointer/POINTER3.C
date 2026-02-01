#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,max=0;
int *ptr1,*ptr2;

clrscr();

 printf("Enter value of a ::");
 scanf("%d",&a);

 printf("\nEnter value of b ::");
 scanf("%d",&b);

 ptr1=&a;
 ptr2=&b;



 if ((*ptr1)>(*ptr2))
 {
     max=*ptr1;
 }
 else
 {
    max=*ptr2;
 }
 printf("\nThe maximum is ::%d",max);

getch();
}