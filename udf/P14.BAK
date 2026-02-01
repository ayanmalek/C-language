			// array with in structure //



#include<stdio.h>
#include<conio.h>

struct stud
{
int rno;
char name[20];
int marks;
}s1[30];

void main()
{



		//struct stud s1[30];

		int n,i,j,tot=0;
		float per;
		clrscr();

		printf("Enter how many information you get:");
		scanf("%d",&n);


		for(i=0;i<n;i++)
		{


			printf("\nEnter studeant roll no:");
			scanf("%d",&s1[i].rno);

			printf("\nEnter studeant name:");
			scanf("%s",s1[i].name);

		 flushall();
		 tot=0;
		 per=0;
		for(j=0;j<9;j++)

		{
			printf("\nEnter marks for subject[%d]",j+1);
			scanf("%d",&s1[j].marks);

			tot=(tot+s1[j].marks);


		}

		   printf("\ngrand total is=%d",tot);


		   per=tot/9;

		   printf("\nperceantage is==>%f",per);

			}


		getch();
}

