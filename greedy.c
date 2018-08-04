#include<stdio.h>
#include<conio.h>
int main()
{
int n,m=1,x=1,sum=0,i=0;
printf("\nEnter No. of Coins: ");
scanf("%d",&n);
while(2*x<n)
{
x=2*x;
m++;
}
int a[m];
x=1;
printf("\nNo .of Bags Required is %d\n",m);
for(i=0;sum!=n;i++)
{
if(sum+x<=n)
	a[i]=x;
else
	a[i]=n-sum;
sum=sum+a[i];
printf("%d ",a[i]);
x=x*2;
}
printf("\nEnter the No. of Coins Required(Less than %d): ",n);
scanf("%d",&x);
printf("\nThe Combination for %d is ",x);
for(i=m-1;x!=0;i--)
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