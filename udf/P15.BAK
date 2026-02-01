#include<stdio.h>
#include<conio.h>
#include<string.h>

struct studeant
{
	char name[100],city[100],add[100];
	double no,pin;
}p[10];
void main()
{
		int i,n;
		char c[100];
		clrscr();

		printf("Enter n number:");
		scanf("%d",&n);

		for(i=0;i<n;i++)
	{
		printf("Enter people Name:");
		scanf("%s",&p[i].name);
		printf("Enter people city:");
		scanf("%s",&p[i].city);
		printf("Enter people addres:");
		scanf("%s",&p[i].add);
		printf("Enter people Phone no:");
		scanf("%ld",&p[i].no);
		printf("Enter city Pin no:");
		scanf("%ld",&p[i].pin);
		printf("\n");
	}

	printf("Enter city to find person information:");
	scanf("%s",&c);

	for(i=0;i<n;i++)
	{
		if(!strcmp(c,p[i].city))
		{
		printf("********************************************************");
			printf("\n People Name:%s",p[i].name);

			printf("\t people city:%s",p[i].city);

			printf("\t people address:%s",p[i].add);

			printf("\n\t people no:%ld",p[i].no);

			printf("\t\n city pin no:%ld",p[i].pin);

		printf("\n*******************************************************");

		}
	}
	getch();
}



