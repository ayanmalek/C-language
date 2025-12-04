#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("enter value of a :");
	scanf("%d",&a);
	
	printf("\n enter value of b :");
	scanf("%d",&b);
	
	printf("\n nuber before swap a:%d,b:%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n nuber after swap a:%d,b:%d",a,b);
	
	
}
