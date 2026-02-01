#include<stdio.h>
#include<conio.h>
void main()
{ int n,i;
 char s[200];
 clrscr();

 printf("enter any string :");
 gets(s);

 printf("\n*******************************");
 printf("\n enter any option 1 or 2 ");;
 printf("\n 1 for encrypt");
 printf("\n 2 for decrypt");
 printf("\n*******************************");
 printf("\n \n select option :");
 scanf("%d",&n);

 switch(n)
 {  case 1 :for(i=0;(i<100 && s[i]!='\0');i++)
	    {   s[i]=s[i]+100;

	    }
	    printf(" the encrypet is : %s",s);
	    break;
    case 2 :for(i=0;(i<100 && s[i]!='\0');i++)
	    {
	     s[i]=s[i]-100;
	    }
	    printf(" the decrypt is : %s",s);
	    break;

 }

 getch();
}