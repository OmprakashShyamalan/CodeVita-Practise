#include<stdio.h>
#include<conio.h>
int fib(int n)
{
if(n<2)
	return n;
else
	return fib(n-1)+fib(n-2);
}
int main()
{
int n,c;
printf("Enter No. of Steps in the Staircase: ");
scanf("%d",&n);
c=fib(n+1);
printf("No. of Ways to Climb %d steps are %d",n,c);
getch();
return 0;
}