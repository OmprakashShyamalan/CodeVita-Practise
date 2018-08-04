#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int n,i,a,b,flag=0,a1,b1;
int s1,s2,s3;
int* arr;
printf("Enter No. of Terms in array:");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
for(a=0;a<n;a++)
	for(b=a+1;b<n;b++)
	{
		s1=0;
		s2=0;
		s3=0;
		for(i=0;i<a;i++)
			s1+=arr[i];
		for(i=a+1;i<b;i++)
			s2+=arr[i];
		for(i=b+1;i<n;i++)
			s3+=arr[i];
		if(s1==s2 && s2==s3)
		{	
			a1=a;b1=b;flag=1;
		}
		
	}
if(flag==1)
		{
			printf("\nThe Equi Pairs is (%d,%d)\n\n",a1,b1);
		}
else	
	printf("\nNo Equi Pairs Exist\n");
getch();
return 0;
}