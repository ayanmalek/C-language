#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
int *ptr1,*ptr2,*ptr3;

clrscr();

 printf("Enter value of a ::");
 scanf("%d",&a);

 printf("\nEnter value of b ::");
 scanf("%d",&b);

 ptr1=&a;
 ptr2=&b;

 printf("\nvalue of a::%d",*ptr1);
 printf("\nvalue of b::%d",*ptr2);

 (*ptr3)=(*ptr1);
 (*ptr1)=(*ptr2);
 (*ptr2)=(*ptr3);

 printf("\nvalue of a after swap ::%d",*ptr1);
 printf("\nvalue of b after swap ::%d",*ptr2);

 getch();

}