#include<stdio.h>
#include<conio.h>
int main()
{
int i,t,n,m=1,x=1,sum=0;
printf("\nEnter No. of Coins: ");
scanf("%d",&n);
t=n;
while(2*x<n)
{
x=2*x;
m++;
}
int a[m];
x=1;
printf("\nNo .of Bags Required is %d\n",m);
for(i=0;t!=0;i++)
{
	if(t%2==0)
		a[i]=t/2;
	else
		a[i]=t/2 +1;
	t=t-a[i];
	printf("%d ",a[i]);
}
printf("\nEnter the No. of Coins Required(Less than %d): ",n);
scanf("%d",&x);
printf("\nThe Combination for %d is ",x);
for(i=0;x!=0;i++)
{
	if(x>=a[i])
	{
		x=x-a[i];
		printf("%d ",a[i]);
		if(x!=0)
			printf("+ ");
	}		
}
return 0;
}