#include<stdio.h>
#include<string.h>
int main(){
	int option_1,option_2,option_3;
	// -----rev string------
	char str[1000];
	// -----armstrong string -------
	char stra[1000];
	int i,len,is_peli=1;
	
	//------option 3----> palindrom
	int start, end,num,original,reversed,temp,digit;
	// ------option 3----> armstong
	int startarm,endarm,number,originalarm,rem,reu;
	
	while(option_1<3){
	
	printf("\n==============================\n");
	printf("Enter your option\n");
	printf("1) for string\n");
    printf("2) for number\n");
    printf("3) for exit\n");
    printf("Enter  here:");
    scanf("%d",&option_1);
	printf("==============================\n");
	
	switch(option_1){
		case 1:	
			printf("==============================\n");
			printf("Enter your option\n");
			printf("1) for revese string\n");
    		printf("2) for wether check string is palindrom or not\n");
    		printf("Enter  here:");
    		scanf("%d",&option_2);
    		printf("==============================\n");
    		
    		switch (option_2){
    			case 1: 
    			
    				printf("enter string :");
    				scanf("%s",&str);
    				strrev(str);
    				puts(str);
    				break;	
			    case 2:
					printf("Enter string : ");
					scanf("%s",&str);
//					fgets(str,sizeof(str),stdin);
					for(i=0;str[i]!='\0';i++){
						if(str[i]=='\n'){
							str[i]='\0';
							break;
						}
					}
					len = strlen(str);
					for(i=0;i<len/2;i++){
						if (str[i]!=str[len-i-1]){
							is_peli=0;
							break;
						}
					}
					if(is_peli==1){
						printf("given string is pelindrom string ");
					}
					else {
						printf("given string is not an pelindrom string ");
					}
					break;
				}
		
		break;
		case 2:
			printf("==============================\n");
			printf("Enter your option\n");
			printf("1) for check either number is pelindrom or not\n\n");
    		printf("2) for check either number is armstrong or not\n");
    		printf("Enter  here:");
    		scanf("%d",&option_3);
			printf("==============================\n");
			switch(option_3){
				case 1:
					printf("Enter start of range: ");
    				scanf("%d", &start);
					printf("Enter end of range: ");
    				scanf("%d", &end);
						for (num = start; num <= end; num++) {
        					original = num;
        					reversed = 0, digit, temp = num;

        					while (temp != 0) {
            					digit = temp % 10;
            					reversed = reversed * 10 + digit;
            					temp = temp / 10;
        					}

        					if (original == reversed) {
            					printf("%d ", original);
        					}
    					}
						printf("Palindrome series between %d and %d:\n", start, end);
        		break;	
        	case 2: 
				printf("Enter start of range: ");
    			scanf("%d", &startarm);
				printf("Enter end of range: ");
    			scanf("%d", &endarm);
					for (number=startarm;number<=endarm;number++){
				 		originalarm=number;
				 		reu = 0;
				 
				 	   while(originalarm !=0){
				 			rem = originalarm % 10;
				 			reu += rem * rem * rem;
				 			originalarm /= 10 ;
				 		}
				 		if(reu == number){
				 		 	printf(" %d ,",number);
				 		}
				 	}
				}
			break;	
		break;	 
		case 3:
			printf("\nExiting ......");
			printf("press  any key to exit");	
		break;
	}
	}
return 0;
}
