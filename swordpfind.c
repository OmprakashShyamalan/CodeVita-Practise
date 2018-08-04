#include<stdio.h>
int sword(int n)
{
int s,i,j,count=0,a[32767],sr=1,k=0;
s=n;
for(i=1;i<=n;i++)
	a[i]=1;
while(s>1){	
  for(i=1;i<=n;i++)
	{
		if(a[i]==1)
		if(k==1)
		{
			k=0;
			a[i]=0;
			s--;
		}
		else
		{
			sr=i;
			k=1;
		}
	}
}
return sr;
}
int main()
{
	int n,i;
	printf("Enter N:");
	scanf("%d",&n);
	printf("\nN\tSurvivor");
	for(i=1;i<=n;i++)
		printf("\n%d\t%d",i,sword(i));
}
