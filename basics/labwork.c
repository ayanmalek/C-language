#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("enter a:");
	scanf("%d",&a);
	printf("\n enter b:");
	scanf("%d",&b);
	printf("\n enter c:");
	scanf("%d",&c);
	printf("\n enter d :");
	scanf("%d",&d);
	
	if (a>b && a>c && a>d){
		printf("\n %d is maximum",a);
	}
	else if (b>a && b>c && b>d){
		printf("\n %d is maximum",b);
	}
	else if (c>a && c>b &&  c>d){
		printf("\n %d is maximum",c);
	}
	else {
		printf("\n %d is maximum",d);
	}
	
	
	return 0;
}
