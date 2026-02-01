#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{

int n,i;
char s[100];

clrscr();

printf("ener any string:");
gets(s);

n=strlen(s);

printf("\n the length of string is :%d",n);
printf("\n the rev of string is ");

 for(i=n-1;i>=0;i--)
 {
   printf("%c",s[i]);
 }

 getch();

}
