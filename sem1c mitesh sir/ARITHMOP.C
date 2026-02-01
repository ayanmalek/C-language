#include<stdio.h>
#include<conio.h>
void main()
{ int n1,n2,ans=0;
  char op;
clrscr();


	printf("enter number 1 :");
	scanf("%d",&n1);
	printf("enter number 2:");
	scanf("%d",&n2);

	flushall();
	printf("enter ariyhmatic opretor");
	scanf("%c",&op);

	switch(op)

{        case '+':ans=n1+n2;printf("ans is %d",ans);break;
	 case '-':ans=n1-n2;printf("ansis %d",ans);break;
	 case '*':ans=n1*n2;printf("ansis %d",ans);break;
	 case '/':ans=n1/n2;printf("ansis %d",ans);break;

	   defualt:
	   printf("please input +,-,*,/");
}     getch();

		}

