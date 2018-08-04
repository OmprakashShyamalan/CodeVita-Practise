#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int n,i,j,k,a,b;
int s1,s2,s3;
int* arr;
printf("Enter No. of Terms in array:");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
i=0;
j=n-1;
s1=arr[i];
s3=arr[j];
while(i<j)
{
	if(s1<s3)
	{
		i++;
		s1+=arr[i];
	}
	else if(s1>s3)
	{
		j--;
		s3+=arr[j];
	}
	else
	{
		s2=0;
		a=i+1;
		b=j-1;
		for(k=a+1;k<b;k++)
			s2+=arr[k];		
		if(s1==s2)
		{
			printf("\nThe Equi Pairs is (%d,%d)\n\n",a,b);
			return 0;
		}
		else
		{
			i++;
			s1+=arr[i];
		}
	}
}
printf("\nNo Equi Pairs Exist\n");
getch();
return 0;
}