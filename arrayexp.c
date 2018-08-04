#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],i;
for(i=0;i<300;i++)
{
	*(i+a)=i+1;
	printf("%d ",*(a+i));
         
}
return 0;
}