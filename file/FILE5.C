#include<stdio.h>
#include<conio.h>
#include<string.h>
 void main()

{  FILE *fptr;
   char name[50],c;
  clrscr();

  printf("Enter file name :: ");
  gets(name);

  fptr=(fopen(name,"r"));
  if(fptr==NULL)
  printf("file is not present...");
  else
  {
   printf("file is present ...\n");
   c=getc(fptr);
   while(c!=EOF)
   {
    printf("%c",c);
    c=getc(fptr);
   }
  }
getch();
}



















