#include<stdio.h>
int main(){
	
	int i,n,ans;
	
	printf("enter number : ");
	scanf("%d",&n);
	
	for (i=1;i<=10;i++)
	{
		ans=n*i;
		printf(" \n %d x %d = %d",n,i,ans);
		
	}
}
