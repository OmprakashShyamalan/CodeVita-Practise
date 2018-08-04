#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,count=0;
printf("Enter the no. of Lockers: ");
scanf("%d",&n);
for(i=1;i*i<=n;i++)
	count++;
printf("No. of Lockers Still open are %d",count);
getch();
return 0;
}