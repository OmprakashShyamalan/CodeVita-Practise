#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
int v,n,m=1,x=1,sum=0,i=0,k=1;
int *a;
printf("\nEnter No. of Coins: ");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
while(2*x<n)
{
x=2*x;
m++;
}
x=(n-x+1)%x;
printf("\nNo .of Bags Required is %d\n",m);
for(i=0;sum!=n;i++)
{
if(sum+k<=n)
	{	
		a[i]=k;
	}
else
	a[i]=n-sum;
if(a[i]>=x && x!=0)
	{
		a[i]=x;
		x=0;
	}
else
	k*=2;
sum=sum+a[i];
printf("%d ",a[i]);
}
printf("\n\nEnter a value Less than %d :",n);
scanf("%d",&v);
if(v<=n)
for(i--;v!=0;i--)
{
	if(a[i]<=v)
	{
		printf("%d ",a[i]);
		v-=a[i];
	}		
}
getch();
return 0;
}