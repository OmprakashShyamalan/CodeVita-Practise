#include<stdio.h>
#include<conio.h>
int main()
{
int n,m,count=0;
printf("Enter a Positive integer: ");
scanf("%d",&n);
m=n;
while(n!=0)
{
	n=n/10;
	count++;
}
printf("No. of Digits in %d is %d ",m,count);
return 0;
}