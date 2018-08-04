#include<stdio.h>
int main()
{
int n,i;
unsigned long long l=1;
printf("Enter N value:");
scanf("%d",&n);
for(i=1;i<n;i++)
	{
		l=l*2;
		l=l%1000000007;
	}
printf("\nThe Count is %lld",l-2);
return 0;
}