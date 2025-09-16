#include<stdio.h>

// Main function
int main(){

 float c; // Variable to store Celsius temperature
 float f;  // Variable to store Fahrenheit temperature
 
   // Ask the user to enter temperature in Celsius
 printf("enter c :");
 scanf("%f",&c); // Take input from user and store in 'c'
 
 
   // Formula to convert Celsius to Fahrenheit
 f=((9.00/5.00)*c)+32.00;
 
  // Print the Fahrenheit value with 2 decimal places
 printf("the f is = %.2f",f);
 
return 0;
}
