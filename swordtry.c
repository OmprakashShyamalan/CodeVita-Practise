#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
        int n,m,x=1,t;
	printf("Enter the No. of People in Queue: ");
	scanf("%d", &n);
	//while(2*x<=n)
	//	x=2*x;
	t = log(n)/log(2);
	x = pow(2,t);
	m = 1 +(n-x)*2;
	printf("\nThe Last person Alive is %d",m);
	getch();
	return 0;
}