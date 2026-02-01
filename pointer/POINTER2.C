#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,*ptr1,*ptr2;

 clrscr();

 printf("Enter value of a ::");
 scanf("%d",&a);

 printf("\nEnter value of b ::");
 scanf("%d",&b);

 ptr1=&a;
 ptr2=&b;

 c=(*ptr1)+(*ptr2);

 printf("\nThe sum is ::%d",c);


getch();
}