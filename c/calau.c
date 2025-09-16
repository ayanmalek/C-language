#include<stdio.h>
int main(){
	
	float a , b, ans=0;
	char op;
	
	printf("enter number 1 :");
	scanf("%f",&a);
	
	printf("enter number 2:");
	scanf("%f",&b);
	
	printf(" \n enter number arithmatic opretor:");
	scanf(" %c",&op);

	printf(" %c",op);

	switch(op){  
		case '+': 
			ans=a+b;
			printf("sum=%.2f",ans);
			break;
		case '-':
			ans=a-b;
			printf("ans=%.2f",ans);
			break;
		case '*':
			ans=a*b;
			printf("ans=%.2f",ans);
			break;
		case '/':
			{if (b!=0)
			
			printf("ans=%.2f",a/b);
				
				
			}	
			break;
					
		default :
			printf("invalid op");
			break;
	}
	return 0;
}
