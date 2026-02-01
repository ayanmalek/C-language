#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[10],sum1=0,sum2=0,i;
int *ptr;

 clrscr();

printf("Enter number of element you want to input :: ");
scanf("%d",&n);

 ptr=a;

for(i=0;i<n;i++)
{
 printf("\n Enter a[%d] :: ",i);
 scanf("%d",ptr+i);
}
for(i=0;i<n;i++)
{
if(*(ptr+i)%2==0)
{
 sum1=sum1+ *(ptr+i);
}
else if(*(ptr+i)%2==!0)
{
 sum2 = sum2+ *(ptr+i);
}
}
printf("\nThe sum of all odd number is :: %d",sum2);
printf("\nThe sum of all even number is :: %d",sum1);


getch();
}