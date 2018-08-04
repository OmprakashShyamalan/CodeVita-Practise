#include<stdio.h>
#include<stdlib.h>
int main()
{
int i=5,j;
j= ++i + ++i + ++i - --i - --i + ++i;
printf("%d%d",i,j);
printf("\n%d%d%d%d%d",i++,++i,++i,i++,--i);
return 0;
}
//88754