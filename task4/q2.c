#include<stdio.h>
int main (){
	int i,j,n=4,k=11;
	
	for(i=0;i<=n;i++){
		for (j=1;j<=i;j++){
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
	
	return 0; 
}
