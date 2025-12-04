#include<stdio.h>
int main(){
	int i,j;
	for(i=0;i<5;i++){
		printf("*");
	 for(j=0;j<5;j++){
	 	if((i==0||i==4)&&j<4){
			printf("*");
		}
		else if(i<4&& j==5&&i!=0){
			printf("*");
		}
		else{
		 printf(" ");
		}
	 }
	 printf("\n");
	}
}
