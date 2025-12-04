#include<stdio.h>
int main()
{
	float n1,n2,n3,n4,n5,avg;

	printf( "Enter value of n1 :");
	scanf("%f",&n1);

	printf("Enter value of n2 :");
	scanf("%f",&n2);

	printf("Enter value of n3 :");
	scanf("%f",&n3);

	printf("Enter value of n4 :");
	scanf("%f",&n4);

	printf("Enter value of n5 :");
	scanf("%f",n5);

	avg=(n1+n2+n3+n4+n5)/5;

	printf(" average of 5 numbers are %.2f",avg);



}
