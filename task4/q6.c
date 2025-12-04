#include<stdio.h>
int main(){
	int i,j,k,q,n=5;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(k=n - i + 1;k<=n;k++){
			printf("%d",k);
		}
		for(q=n-1;q>=n+1-i;q--){
			printf("%d",q);
		}
		printf("\n");
	}
	
	
	return 0 ;
}
