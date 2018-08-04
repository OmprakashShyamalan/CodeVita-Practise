#include<stdio.h>
#include<conio.h>
int main()
{
    int n,m,i,j,t;
    printf("Enter Order of Matrix:");
    scanf("%d",&n);
    m=2*n -1;
    for(i=0;i<m;i++)
    {
        t=n+1;
	for(j=0;j<m;j++)
        {
            if(i>=j && i+j<=m-1)
                t--;
            else if(i+j>m-1 && i<j)
                t++;
            printf("%d ",t);
        }
        printf("\n");
    }
    getch();
    return 0;
}
