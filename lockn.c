#include<stdio.h>
#include<math.h>
int isperfect(int i)
{
	int temp=sqrt(i);
		if(temp*temp==i)
			return 1;
		else
			return 0;	
}
int main()
{
int n,i,j,count=0;
printf("Enter No. of Lockers: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  if(isperfect(i))
	count++; 
}  
printf("No.of Lockers Open for %d is %d\n",n,count);
return 0;
}