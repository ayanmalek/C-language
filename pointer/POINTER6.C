#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[10],i;
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
 printf("\nThe element are a[%d] :: %d \nand adress is :: %u ",i+1,*(ptr+i),ptr+i);
}
getch();
}