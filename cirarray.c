#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,j,m;
int** arr;
printf("Enter the Value of N: ");
scanf("%d",&n);
m=2*n -1;
arr=(int**)malloc(n*n*sizeof(int));
for(i=0;i<m;i++)
{
	for(j=0;j<m;j++)
	{
		if(i>=j && j!=0 && i+j<m)
                	n--;
            	else if(i+j>=m && i<j)
                	n++;
            printf("%d\t",n);
	}
	printf("\n");
}
getch();
return 0;
}
