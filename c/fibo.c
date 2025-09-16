#include<stdio.h>
int main(){
	int i,a=1,b=0,c=0,n;
	
	printf("enter n:");
	scanf("%d",&n);
	
 for (i=0;i<n;i++){
 	if(i<=1){
 		c=i;
	 }
	else {
		c=a+b;
		a=b;
		b=c;
	}
	printf("%d ",c);
 }
	return 0;
	
}
