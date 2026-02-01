#include<stdio.h>
#include<conio.h>
void main ()
{
	int n;

	printf("enter value of number :");
	scanf("%d",&n);

	if(n%2==0)
		printf(" the number %d is even number : ",n);
	else
		printf("the number %d is odd number :",n);
}