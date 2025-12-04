#include<stdio.h>
int main(){
	int last,num,count=0;
	
	// Ask user for a number
	printf("enter number of your choice : ");
	scanf("%d",&num);
	
	
	last = num % 10;
	
	
	while(num >=10){
     num=num%10;
	 count++;     
    }
	count=last+count;
	printf(" the number of digits are %d",count);
}
