#include<stdio.h>
#include<conio.h>
void intrest( int p,float r,int n)
{
float s;
s=(p*r*n)/100;

printf("\n Your Simple Intrest is :%f",s);

}
void main()
{
 int p,n;
 float r;
 clrscr();
printf("====================\n");
printf("Wellcome to find Simpe Intrest\n");
printf("====================\n");

printf("\nEnter P:");
scanf("%d",&p);

printf("\nEnter R:");
scanf("%f",&r);

printf("\nEnter N:");
scanf("%d",&n);

 intrest(p,r,n);

getch();
}
