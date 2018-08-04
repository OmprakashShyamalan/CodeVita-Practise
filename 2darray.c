#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int i,j,**a;
a=(int**)malloc(4*sizeof(int));
for(i=0;i<2;i++)
	for(j=0;j<2;j++)
		printf("%p ",&a[i][j]);
return 0;
}