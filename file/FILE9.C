#include<stdio.h>
#include<conio.h>
void main()

{
 FILE *fptr;

 char c,c1;
 int count=0;
  clrscr();
  fptr=(fopen("E:\ayan.txt","r"));
  clrscr();
  printf("Enter char :: ");
  scanf("%c",&c1);
  if(fptr==NULL)
  {
   printf("can't open file ...");
  }
  else
  {
   do
   {
    c=getc(fptr);
    if(c==c1)
    {
     count = count++;
    }
   } while(c!=EOF);
  }
  printf("%d",count);
  fclose(fptr);
  getch();

}




















