#include<stdio.h>
int main(){
	int a , b , c;
	
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	
//  	c=a;
////	a=b;
////	b=c;
////
////	printf("a is = %d and b is = %d",a,b);
	
	
	// without using third variable 
	
	

	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("a is = %d and b is = %d",a,b);
	return 0;
	
}
