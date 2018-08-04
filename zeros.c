#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n,k,flag=1;
printf("Enter No. of Terms in Array:");
scanf("%d",&n);
int *a=(int*)malloc(n*sizeof(int));;
printf("Enter Total Number of Sequence to Check:");
scanf("%d",&k);
for(i=0;i<n;i++)
	scanf("%d",a+i);
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
if(i!=0 && a[i-1]==a[i] && a[i]==1)
	flag++;
else{
	flag=1;
}
if(flag==k)
{
	printf("0 ");
	flag=0;
}
}
return 0;
}