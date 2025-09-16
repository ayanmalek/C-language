#include<stdio.h>
int main(){
	
	int a,b,c;
	
	printf("enter value of a:");
	scanf("%ld",&a);
	
	
	printf("enter value of b:");
	scanf("%ld",&b);
	
	
	printf("enter value of c:");
	scanf("%ld",&c);
	
	if(a>b && a>c){
		printf("a is a biggest number");
	}
	
	else if (b>a && b>c){
	    printf("b is a biggest number ");	
	}
	
	else{
		printf("c is a biggest number");
	}
}
	
