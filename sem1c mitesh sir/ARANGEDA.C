#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[5],no,temp,j ;


    clrscr();

    printf("Enter how many number to input ");
    scanf("%d",&no);

    for(i=0;i<no;i++)
    {
       printf(" Enter number [%d]:",i);
       scanf("%d",&a[i]);

    }

     for(i=0;i<no;i++)
    {
       for(j=j+1;j<no;j--)
    {   if(a[i]>a[j])
	  {
	    temp=a[i];
	    a[i]=a[j];
	    a[j]=temp;
	  }


    }
    }
    printf("The number arranged in ascending order are given below: \n ");
    printf(" arranged number [%d]:%d",i,a[i]);
    getch();
}