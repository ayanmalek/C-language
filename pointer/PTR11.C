#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
	int A,B;
	clrscr();

	printf("Enter value for A:");
	scanf("%d",&A);

	printf("enter value for B:");
	scanf("%d",&B);

	swap(&A,&B);
	printf("\nAfter swaping value of A: %d",*x);
	printf("\nAfter swaping value of B: %d",*y);
	getch();
}
void swap(int *x,int *y)
{

	int z;

	z=*x;
	*x=*y;
	*y=z;


}