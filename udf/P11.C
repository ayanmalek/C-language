#include<stdio.h>
#include<conio.h>

struct calculate
{
int no1,no2;
}s1;
void main()
{

		int a;
		int ans;
		clrscr();

		printf("Enter value for no1:");
		scanf("%d",&s1.no1);

		printf("Enter value for no2:");
		scanf("%d",&s1.no2);


		printf("\nSelect your calculation:");
		scanf("%d",&a);

		switch(a)
		{

		case 1:
		{
			ans=s1.no1+s1.no2;

			printf("Your ans is ==>%d",ans);
			break;
		}

		case 2:
		{
			ans=s1.no1-s1.no2;

			printf("Your ans is ==>%d",ans);
			break;
		}

		case 3:
		{
			ans=s1.no1*s1.no2;

			printf("Your ans is ==>%d",ans);
			break;
		}

		case 4:
		{
			ans=s1.no1/s1.no2;

			printf("Your ans is ==>%d",ans);
			break;
		}

		default :
		{

		printf("Select correct opretion");
		break;

		}

		}

		getch();
}





   