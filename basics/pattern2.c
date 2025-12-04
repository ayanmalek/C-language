#include<stdio.h>
int main(){
	int i , j , n =6 ;
	
	
	for (i=1;i<n;i++){
		for (j=i;j<n;j++){
			if (j % 2 != 0){
				printf("1 ");
			}
			else {
				printf("0 ");
			}
		}
		printf("\n");
	}
}
