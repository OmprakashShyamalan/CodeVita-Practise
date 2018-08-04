#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int lps(char*);
int max(int,int);
int main()
{
	char str[100];
	int n;
	printf("Enter A string to Search for Palindrome: ");
	scanf("%s",str);
	n=lps(str);
	printf("\nLeast No. of Characters to be removed is %d",n);
	return 0;
}
int max(int a,int b)
{
	return a>b?a:b;
}
int lps(char* str)
{
	int n = strlen(str);
    	int L[n][n],i,cl,j;
    	for (i = 0; i < n; i++)
        	L[i][i] = 1;
    	for (cl = 2; cl <= n; cl++)
    	{
        	for (i = 0;i < n - cl + 1; i++)
        	{
            		j = i + cl - 1;
            	if (str[i] == str[j] && cl == 2)
                	L[i][j] = 2;
            	else if (str[i] == str[j])
                	L[i][j] = L[i + 1][j - 1] + 2;
            	else
                	L[i][j] = max(L[i][j - 1],L[i + 1][j]);
        	}
    }
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(i<=j)
				printf("%d ",L[i][j]);
			else
				printf("0 ");
		printf("\n");
	}
    return n-(L[0][n - 1]);
}