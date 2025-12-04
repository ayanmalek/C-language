#include<stdio.h>
int main(){
	int a,count=0;
	
	printf("enter number of your choice : "); // input number
	scanf("%lld",&a);
	
	if (a==0){
		count= 1;  // special case for 0
	}
	
	while(a!=0){
     a=a/10;     // remove last digit
	 count++;    // increase count
	}
		
	printf(" The total numbers are %lld",count); // print total digits
}

