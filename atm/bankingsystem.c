#include<stdio.h>
#include<stdlib.h>
#include <string.h>

// ------- function difination -------
void newacc(){
	
    int dob,adcnum,pincode,mo_num;
	char cus_name[100] , adre[500],city[100],state[100],contry[100];
	
//	system ("cls");
	
	printf("Enter Customer Name :");
	scanf("%s",&cus_name);
	
	printf("\nEnter Birth Date of Customer:");
	scanf("%d",&dob);
	
	printf("\nEnter Customer Mo.No:");
	scanf("%d",&mo_num);
	
	printf("\nEnter Pincode:");
	scanf("%d",&pincode);
	
	printf("\nEnter Customer City :");
	scanf("%s",&city);
	
	printf("\nEnter State:");
	scanf("%s",&state);
	
	printf("\nEnter Contry:");
	scanf("%s",&contry);
	
	printf("\nEnter Customer Address :");
	scanf("%s",&adre);

}
void accdata(){
    int dob,adcnum,pincode,mo_num;
	char cus_name[100] , adre[500],city[100],state[100],contry[100];
	
	system("cls");
	
	printf("===================================\n");
    printf("          Account Details          \n");
    printf("===================================\n");
    printf("Customer Name           : %s",cus_name);
    printf("\nBirth Date of Customer: %d",dob);
    printf("\nCustomer Mo.No        :%d",mo_num);
    printf("\nPincode               :%d",pincode);
    printf("\nCustomer City         :%s",city);
    printf("\nState                 :%s",state);
	printf("\nContry                :%s",contry);
	printf("\nCustomer Address      :%s",adre);
    printf("===================================\n");
}


int main(){
	int option ;
	// variable for new account opning
	int cus_birth,adcnum,pincode,mo_num;
	char cus_name[100] , adre[500],city[100],state[100],contry[100];
	
	//    diaplay
	printf("===================================\n");
    printf(" Welcome to Brother Hood Bank \n");
    printf("===================================\n\n");
    

    while(option<=5){
     printf("===================================\n");
     printf("(1) Open New Account\n");
     printf("(2) Account Information\n");
     printf("(3) Deposite\n");
     printf("(4) Cash Out\n");
     printf("(5) Exit\n");
     printf("===================================\n\n");

	 printf("===================================\n");
     printf("Enter Any of Above Option :");
     scanf("%d",&option);
     printf("===================================\n");
    
     switch(option){
    	case 1: 
			newacc();
		 	break;
		case 2:
			accdata();
			break;
			
		case 5:
			printf("\nThank You For Vesiting Brother Hood Bank");
			break;	
		default:
			printf("\nPlease enter numbber 1 to 4");
			break; 
			 	
		 	
	}
}
	
		
	return 0;
}

