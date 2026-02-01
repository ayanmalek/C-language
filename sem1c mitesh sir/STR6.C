#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{

int len,i;
char s[100];

clrscr();

printf("ener any string:");
gets(s);

len=strlen(s);

printf("\n the length of string is :%d",len);
printf("\n the rev of string is %s ",strrev(s));



 getch();

}
