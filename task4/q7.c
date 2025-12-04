#include<stdio.h>
int main(){
	int i,j,k,q,n=5;
	
	for (i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		for(k=1;k<=2*(n-i);k++){
			printf(" ");
		}
		for(q=i;q>=1;q--){
			printf("%d",q);
		}
		printf("\n");
	}
	return 0;
}
