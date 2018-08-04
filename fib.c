#include<stdio.h>
#include<conio.h>
int main()
{
int a=0,b=1,n,i,c;
printf("Enter No. of Steps in the Staircase: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	c=a+b;
	a=b;
	b=c;
}
printf("No. of Ways to Climb %d steps are %d",n,c);
getch();
return 0;
}
