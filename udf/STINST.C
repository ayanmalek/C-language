#include<stdio.h>
#include<conio.h>
#include<string.h>


union stud {
 int roll ;
 char name[50];
	union date {
	int day ;
	char month[100];
	int year;
	}dob;
}s;
void main()
{
   union stud s;
   clrscr();
   strcpy(s.name,"ayan");
   strcpy(s.dob.month," dec");

   puts(s.name);
   puts(s.dob.month);

   printf("%d",sizeof(s));
   getch();
}
