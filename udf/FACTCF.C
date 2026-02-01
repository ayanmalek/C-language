#include<stdio.h>
#include<conio.h>
int  fact(int);
void main(){
	 int n;
	 int f;
	 clrscr();

	 printf("Enter Number:: ");
	 scanf("%d",&n);

	 f=fact(n);

	 printf("\nThe factorial of %d is:: %d",n,f);

getch();
}
int fact(int n){
	if (n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
	 return n * fact(n-1);
	}

}