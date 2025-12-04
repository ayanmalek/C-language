#include <stdio.h>
int main(){
	
	int sub;
	char name[100];
	
	pritf("enter student name :");
	scanf("%s",&name);
	
	printf("\n enter marks of subject out of 100 :");
	scanf("%d",&sub);
	
	if (sub>=90 && sub<=100){
	 printf("\n your grad is A");
	}
	else if(sub<=89 && sub>=70){
		printf(" \n your grad is B");
	}
	else if (sub<=69 && sub>=50){
		printf("\n your grad if C");
	}
	else if (sub<=49 && sub>=35){
		printf("\n your grad is D");
	}
	else if (sub<=34 && sub>=0){
		printf("\n your grad is F");
	} 
	
	
	
	
}
