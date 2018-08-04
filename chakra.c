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
void fillmatrix(int n,int* arr)
{
	int i,j,i1=0,j1=0,r=n-1,c=n-1,t=1;
	while(i1<=r && j1<=c)
	{
		for(j=j1;j<=c;j++)
			arr[(i1*n) + j]=t++; 
		i1++;
		for(i=i1;i<=r;i++)
			arr[(i*n) +c]=t++;
		c--;
		for(j=c;j>=j1;j--)
			arr[(r*n) + j]=t++;
		r--;
		for(i=r;i>=i1;i--)
			arr[(i*n) + j1]=t++;
		j1++;
	}
}
void print(int n,int*arr)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
				printf("%d\t",arr[(i*n)+j]);
		}
		printf("\n");
	}
}

