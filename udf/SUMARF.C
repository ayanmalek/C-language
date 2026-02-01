#include<stdio.h>
#include<conio.h>
void sumar(int);

void main()
{  int n;
clrscr();

	printf("Enter Number of Element");
	scanf("%d",&n);
	sumar(n);


getch();
}
void sumar(int n)
{
  int a[50];
  int i,sum=0;


  for(i=0;i<n;i++){
    printf("\nEnter element value of a[%d]::",i);
    scanf("%d",&a[i]);
    sum+=a[i];
  }
  printf("The sum of all array Element is ::%d",sum);

}