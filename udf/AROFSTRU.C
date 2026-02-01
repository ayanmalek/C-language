#include<stdio.h>
#include<conio.h>
#include<string.h>
struct stud {
 char name[50];
}s;
void main()
{
   struct stud s;
   clrscr();
   strcpy(s.name,"ayan");
   puts(s.name);
   getch();
}
