#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n,num[50],sum=0;
   clrscr();
   printf(" enter the number of element that you want to input:");
   scanf("%d",&n);

   for (i=0;i<n;i++)
   {
     printf("enter value of num[%d]",i);
     scanf("%d",&num[i]);
   }
   for (i=0;i<n;i++)
   {
     printf("\n your given number is num[%d]=%d",i,num[i]);
   }
   for(i=0;i<n;i++)
   {
    sum=sum+num[i];
   }
   printf("\n  \n and the sum for them is =%d",sum);
   getch();
}