#include<stdio.h>
int main(){
	
	float a , b, ans=0;
	int option;
	char op;
	do{
	printf("===================================\n");
     printf("(1) claculate \n");
     printf("(2) Exit\n");
     printf("===================================\n\n");

	 printf("===================================\n");
     printf("Enter Any of Above Option :");
     scanf("%d",&option);
     printf("===================================\n");
     
    switch(option){
     	case 1:{
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
					printf("sum=%.2f\n",ans);
					break;
				case '-':
					ans=a-b;
					printf("ans=%.2f",ans);
					break;
				case '*':
					ans=a*b;
					printf("ans=%.2f\n",ans);
					break;
				case '/':
					{if (b!=0)
						printf("ans=%.2f\n",a/b);	
					}	
					break;
					
				default :
					printf("invalid op\n");
					break;
		}
			break;
		}
     	
	case 2 : printf("Press any key to exit........\n");
	break;
	}
    
	}while(option<=2);
	
	return 0;
}
