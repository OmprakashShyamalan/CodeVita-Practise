#include<stdio.h>
int main()
{
int n,i,j,a[32767]={0},count=0;
printf("Enter No. of Lockers: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  for(j=i;j<=n;j=j+i)
  {
	if(a[j]==0)
		a[j]=1;
	else
		a[j]=0;
  }
  if(a[i]==1)
	count++;
}
  
printf("No.of Lockers Open for %d is %d\n",n,count);
return 0;
}