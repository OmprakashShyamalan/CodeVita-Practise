#include<stdio.h>
#include<stdlib.h>
void fillmatrix(int,int*);
void print(int,int*);
int main()
{
	int n,i,*arr;
	printf("Enter Order:");
	scanf("%d",&n);
	arr=(int*)malloc((n*n)*sizeof(int));
	fillmatrix(n,arr);
	print(n,arr);
	return 0;
}
void print(int n,int* arr)
{
	int i,j,i1=0,j1=0,r=n-1,c=n-1;
	while(i1<=r && j1<=c)
	{
		for(j=j1;j<=c;j++)
			printf("%d ",arr[(i1*n) + j]); 
		i1++;
		for(i=i1;i<=r;i++)
			printf("%d ",arr[(i*n) +c]);
		c--;
		for(j=c;j>=j1;j--)
			printf("%d ",arr[(r*n) + j]);
		r--;
		for(i=r;i>=i1;i--)
			printf("%d ",arr[(i*n) + j1]);
		j1++;
	}
}
void fillmatrix(int n,int*arr)
{
	int i,j,t=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		arr[(i*n)+j]=t++;
		printf("%d\t",arr[(i*n) + j]);
		}
		printf("\n");
	}
}

