#include<stdio.h>
int main(){
	
	int a , b, ans=0;
	char op;
	
	printf("enter number 1 :");
	scanf("%d",&a);
	
	printf("enter number 2:");
	scanf("%d",&b);
	
	
	
	printf(" \n enter number arithmatic opretor:");
	scanf(" %c",&op);

	printf("%c",op);

	switch(op){
		case '+': 
			ans=a+b;
			printf("sum=%d",ans);
			break;
		default :
			printf("invalid op");
			break;
	}
	return 0;
}
