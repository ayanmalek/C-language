#include<stdio.h>

int main(){
	// Base salary
   // HRA (House Rent Allowance) as percentage
   // DA (Dearness Allowance) as percentage
    // TA (Travel Allowance) as percentage
     // Variable for gross salary
	float  bs,hra,da,ta,gs;
	
	
	printf("enter base salary :");
	scanf("%f",&bs);
	printf("enter hra  :");
	scanf("%f",&hra );
	printf("enter da :");
	scanf("%f",&da);
	printf("enter ta :");
	scanf("%f",&ta);	
		
	
	
	//  formula
	gs=bs+(hra)+(da)+(ta);
	
	// Print gross salary
	printf(" gross salary is = %.f",gs);
	 
	 return 0;
}
