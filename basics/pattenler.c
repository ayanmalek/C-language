#include<stdio.h>
int main(){
	int i,j;
	char ch='A';
	
	for(i=1;i<=5;i++){
		if(i%2==0){
			char temp=ch+i-1;
			for(j=0;j<i;j++){
				printf(" %c",temp-j);
			}
			ch+=i;
		}
		else{
			for(j=0;j<i;j++){
				printf(" %c",ch++);
				
			}
		}
		printf("\n");
	}
	return 0;
}
