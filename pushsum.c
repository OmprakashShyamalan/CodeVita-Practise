#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n,temp,flag=0;
printf("Enter No. of Terms in Array:");
scanf("%d",&n);
int *a=(int*)malloc(n*sizeof(int));;
for(i=0;i<n;i++)
	scanf("%d",a+i);
for(i=0;i<n;i++)
{
if((i+1)<n && a[i]!=0 && a[i]==a[i+1])
{
	temp=a[i]+a[i+1];
	printf("%d ",temp);
	i++;
	flag++;
}
else if(a[i]!=0){
	printf("%d ",a[i]);
}
else
	flag++;
}
while(flag--)
	printf("0 ");
return 0;
}