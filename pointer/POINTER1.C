#include<stdio.h>
#include<conio.h>
void main()
{

 int a,*ptr;
 clrscr();

 printf("Enter value of a :");
 scanf("%d",&a);



 printf("\nthe value of a :%d",a);
 printf("\nthe adress of a:%u",&a);

 ptr=&a;


 printf("\nthe value of *ptr:%d",*ptr);
 printf("\nthe adress of *ptr:%u",&*ptr);


 getch();

}




















