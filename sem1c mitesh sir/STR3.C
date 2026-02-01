#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char str1[100],str2[100];
  char str3[100];
  int i=0, j=0;
   clrscr();

   printf("enter str1:");
   gets(str1);

   printf("\n enter str2:");
   gets(str2);

   printf("\n \n first string :%s",str1);
   printf("\n second string : %s",str2);

   while(str1[i]!='\0')
   {
    str3[j]=str1[i];
    j++;
    i++;
   }
   while(str2[i]!='\0')
   {
    str3[j]=str2[i];
    i++;
    j++;
   }
   str3[j]='\0';

   printf("\n conected string:%s",str3);
   getch();
}