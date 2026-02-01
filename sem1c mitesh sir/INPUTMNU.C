#include<stdio.h>
#include<conio.h>
void main()
{
    int month;
    clrscr();
    printf("enter number beatween 1 to 12 ");
    scanf("%d",&month);
    switch(month)

 {      case 1:printf("jan");break;
	case 2:printf("feb");break;
	case 3:printf("march");break;
	case 4:printf("april");break;
	case 5:printf("may");break;
	 case 6:printf("jun");break;
	 case 7:printf("july");break;
	 case 8:printf("aug");break;
	 case 9:printf("sup");break;
	  case 10:printf("oct");break;
	  case 11:printf("nav");break;
	  case 12:printf("dec");break;

	default:printf("invalid month number ");
}
	getch();
}