#include<stdio.h>
int main()
{
	int day ;
	
	printf("enter day number");
	scanf("%d",&day);
	
	switch(day)
	
	{
		case 1 : printf("monday");break;
		case 2 : printf("t");break;
		case 3 : printf("w");break;
		case 4 : printf("thu");break;
		case 5 : printf("fri");break;
		default : printf("enter 1 to 5");
	}
	
}
