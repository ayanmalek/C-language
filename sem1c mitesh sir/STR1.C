#include<stdio.h>
#include<conio.h>
void main()
{  int i,len=0;
   char s[100];
   clrscr();

   printf("enter string:");
   gets(s);

   for (i=0;s[i]!='\0';i++ ){
       len++;
   }
   printf(" total char=%d",len);
   getch();

}