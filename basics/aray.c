#include<stdio.h>
int main(){
	int a[100],b[100],i,j,n;
	
	printf("n:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("ele:");
		scanf("%d",&a[i]);
		
	}
    for(i=0;i<=n;i++){
    	b[j]=a[i];
    	j--;
    
	}
	for(i=0;i<=n;i++){
	printf("\n rev b[%d]: %d",i,b[i]);
	}
	
}
