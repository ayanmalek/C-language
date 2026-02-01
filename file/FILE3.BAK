#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   FILE *fptr1,*fptr2;
   char c;
   clrscr();
   fptr1 = (fopen("E:\\stud.txt","r"));
   fptr2 = (fopen("E:\\stud2.txt","w"));
   c=getc(fptr1);
   while(c!=EOF)
   {
     putc(c,fptr2);
    c=getc(fptr1);

   }
   fclose(fptr1);
   fclose(fptr2);

  fptr2=(fopen("E:\\stud2.txt","r"));


if(fptr2==NULL)
{
 printf("cant open file ... ");

}
else
{
 c=getc(fptr2);
 while(c!=EOF)
 {
  printf("%c",c);
  c=getc(fptr2);
 }
}
  fclose(fptr2);


  getch();

}




















