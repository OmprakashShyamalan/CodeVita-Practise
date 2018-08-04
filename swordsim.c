#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,x=1,t;
	printf("Enter No. of people in queue:");
	scanf("%d",&n);
	i=log10(n)/log10(2);
	x=pow(2,i);
	t=1+(n-x)*2;
    printf("\n%d Survives for %d people in Queue",t,n);
}