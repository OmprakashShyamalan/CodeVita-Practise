#include<stdio.h>
int main()
{
int i=5,j;
printf("%d %d %d %d %d",++i,i++,++i,--i,i++);
printf("\n//Gcc: &i 6 &i &i 5");	//i=8;
printf("\nGcc:8 6 8 8 5");
//--i & ++i ->ret ref
//i++ & i-- -> ret val
printf("\n//Tc:8 6 6 5 5");	//i=8
return 0;
}