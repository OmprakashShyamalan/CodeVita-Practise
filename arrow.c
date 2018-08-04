#include<Stdio.h>
int main()
{
	int i,j,n,r;
	printf("Enter Order of Matrix: ");
	scanf("%d",&n);
	r=2*n-1;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if((i==j && i+j<=r-1)|| (i+j==r-1 && i>=j))
				printf("*");
			else
				printf(" ");
			//printf("%d%d ",i,j);
		}
		printf("\n");
	}
	return 0;
}
