#include<stdio.h>
int main(){
	int last,num,sum;
	
	// Ask user for a number
	printf("enter number of your choice : ");
	scanf("%d",&num);
	
	// Get last digit using modulus
	last = num % 10;
	
	// Find first digit by dividing until num < 10
	while(num >=10){
     num=num/10;     
    }
	
    // Add first and last digit
    sum=last + num;
    
    // Print results
    printf("\n your first digit is : %d",num);
	printf("\n your last digit is : %d",last);
    printf("\n the sum of those is : %d",sum);
}

