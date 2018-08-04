#include<stdio.h>
int main()
{
int n,i,j,count=0;
printf("Enter No. of Lockers: ");
scanf("%d",&n);
for(i=1;i*i<=n;i++)
{
	count++; 
}  
printf("No.of Lockers Open for %d is %d\n",n,count);
return 0;
}