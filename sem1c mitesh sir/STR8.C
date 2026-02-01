#include<stdio.h>
#include<conio.h>
void main()
{ int i;
  char str[100];
  clrscr();

  printf("enter string:");
  gets(str);

  for(i=0;str[i]!=0;i++)
  {
    if (str[i]>=65 && str[i]<=91)
    {
      str[i]=str[i]+32;
    }
    else if (str[i]>=97 && str[i]<=122)
    {
      str[i]=str[i]-32;
    }

  }
  printf("\n name is :");
  puts(str);

  getch();
}