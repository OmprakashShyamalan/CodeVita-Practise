#include<stdio.h>
int main()
{
int n,s,i,j,count=0,a[32767],sr,k=0;
printf("Enter No. of People in Queue: ");
scanf("%d",&n);
s=n;
for(i=1;i<=n;i++)
	a[i]=1;
while(s>1)
{	
  for(i=1;i<=n;i++)
	{
		if(a[i]==1)
		if(k==1)
		{
			k=0;
			a[i]=0;
			s--;
			printf("%d",i);
			if(s!=1)
			printf(" And gives the Sword to ");
		}
		else
		{
			sr=i;
			k=1;
			if(s!=n)
				printf("%d",i);
			printf("\n%d kills ",i);
		}
	}
}
printf("\n%d survives for %d people in Queue\n",sr,n);
return 0;
}