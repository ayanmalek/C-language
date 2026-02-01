#include<stdio.h>
#include<conio.h>
struct cust
{
 int no;
 long int pn;
 char name[50],add[100],email[50];

}c1;
void main()

{
  FILE *f1;
  clrscr();
 f1=(fopen("E:\cust.txt","w"));
 printf("Enter cust no :: ");
 scanf("%d",c1.no);
 printf("Enter cust name :: ");
 scanf("%s",c1.name);
 printf("Enter cust address :: ");
 scanf("%s",c1.add);
 printf("Enter cust email :: ");
 scanf("%s",c1.email);
 printf("Enter cust phone no :: ");
 scanf("%ld",c1.pn);


 fprintf(f1,"cust no :: %d",c1.no);
 fprintf(f1,"cust name :: %s",c1.name);
 fprintf(f1,"cust address :: %s",c1.add);
 fprintf(f1,"cust email :: %s",c1.email);
 fprintf(f1,"cust phone no :: %ld",c1.pn);



 fclose(f1);
  getch();

}




















