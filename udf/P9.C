#include<stdio.h>
#include<conio.h>
#include<string.h>
struct data {
 int date[50];
 char tbook[100];
 char author[100];
 int pages;
 int price;
}d;

void main(){
 struct data d;
 clrscr();
 printf("\n Enter Title of the Book:");
 gets(d.tbook);

 printf("\n Enter Author Name:");
 gets(d.author);

 printf("\n Enter Totle Number of Pages:");
 scanf("%d",&d.pages);

 printf("\n Enter book price:");
 scanf("%d",&d.price);


 printf("\n ====================");
 printf("\n All Library below");
 printf("\n ====================");
 printf("\n Title Of the Book:");
 puts(d.tbook);
 printf("\n Author of the book:");
 puts(d.author);
 printf("\n Totle Number of Pages:%d",d.pages);
 printf("\n Price of the book:%d",d.price);


 getch();
}