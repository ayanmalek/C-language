#include<stdio.h>
#include<conio.h>
float intrest(int*,float*,int*);
void main()
{

	int p,n;
	float r,f;
	clrscr();

	printf("Enter principal amount:");
	scanf("%d",&p);
	printf("Enter rate of intrest:");
	scanf("%f",&r);
	printf("Enter the years:");
	scanf("%d",&n);

      f=intrest(&p,&r,&n);

      printf("Simple intrest is == %f",f);

      getch();
}
float intrest(int *p,float *r,int *n)
{

	float si;

	si=(*p**r**n)/100;

	return si;
}



