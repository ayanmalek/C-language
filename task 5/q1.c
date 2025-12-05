#include <stdio.h>
int main(){
	int a[50],i,n;
	
	printf("\nEnter size of array:");
	scanf("%d",&n);
	
	printf("\nEnter element of arry");
	for (i=0;i<n;i++){
		printf("\na[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\nYour Elements are");
	for(i=0;i<n;i++){
		printf("\nElement a[%d]:%d",i,a[i]);
	}
	printf("\nThe Negetive Number:");
	for (i=0;i<n;i++){
		if(a[i]<0){
			printf("%d,",a[i]);
		}
	}
	
	return 0;
}
