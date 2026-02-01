#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n,a[50],find,count=0;
   clrscr();
   printf(" enter the number of element that you want to input:");
   scanf("%d",&n);

   for (i=0;i<n;i++)
   {
     printf("enter value of num[%d]",i);
     scanf("%d",&a[i]);
   }

   printf(" \n enter number to find:");
   scanf("%d",&find);

   for (i=0;i<n;i++)
   {
   if(a[i]==find)
   count++;
   }
   printf(" \n the frequnce of number is=%d",count);


   getch();
}