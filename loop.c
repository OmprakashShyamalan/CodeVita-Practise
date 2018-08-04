#include<stdio.h>
int main()
{
int c=1,i,count=0;
for(i=0;i<100;i++)
{
	if(c<=100)
		count++;
	//else
		//break;
	printf("%d ",c);
	c=c*2;
}
printf("\ncount=%d ",count);
return 0;
}