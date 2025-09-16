#include<stdio.h>

int main(){
	// Initialize two angles of a triangle
	int a,b,c;
	
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	// Calculate the third angle
	c=180-a-b;
	
	// Print the third angle
	printf("the c is = %d",c);
	
 return 0;	
}
