#include<stdio.h>
#include<conio.h>
int main()
{
    int n,o,i,j;
    printf("Enter Order of Matrix:");
    scanf("%d",&n);
    o=2*n -1;
    for(i=0;i<o;i++)
    {
        for(j=0;j<o;j++)
        {
                if(i>=j && i+j<o)
                    printf("*\t");
                else if(i+j>=o-1 && i<=j)
                    printf("*\t");
                else
                    printf("\t");
        }
        printf("\n");
    }
    getch();
    return 0;

}

