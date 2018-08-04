#include<stdio.h>
#include<math.h>
int main()
{
int n,i,j,count=0;
printf("Enter No. of Lockers: ");
scanf("%d",&n);
count=sqrt(n);
printf("No.of Lockers Open for %d is %d\n",n,count);
return 0;
}