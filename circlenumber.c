#include<stdio.h>
#include<conio.h>
int main()
{
    int n,m,i,j;
    printf("Enter Order of Matrix:");
    scanf("%d",&n);
    m=2*n -1;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
           if(i>=j && i+j<=m-1 && j!=0)
		n--;
	   else if(i+j>m-1 && i<j)
		n++;
	   printf("%d ",n);
        }
        printf("\n");
    }
    return 0;
}
