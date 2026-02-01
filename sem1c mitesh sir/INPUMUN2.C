#include<stdio.h>
#include<conio.h>
void main()
{ int month;
	clrscr();
	printf("enter number beatween 1 to 12");
	scanf("%d",&month);

	if(month==1) printf("jan");
	else if(month==2) printf("feb");
	else if(month==3) printf("march");
	else if(month==4) printf("april");
	else if(month==5) printf("may");
	else if(month==6) printf("jun");
	else if(month==7) printf("july");
	else if(month==8) printf("august");
	else if(month==9) printf("sup");
	else if(month==10) printf("oct");
	else if(month==11) printf("nov");
	else if(month==12) printf("dec");
	else printf("invalide month number");
	getch();
}
