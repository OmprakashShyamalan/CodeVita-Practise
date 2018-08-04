#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	printf("Enter String1: ");
	scanf("%s",s1);
	printf("Enter String2: ");
	scanf("%s",s2);
	int i,j,n1,n2,len,count=0;
	n1=strlen(s1);
	n2=strlen(s2);
	len=n1+n2;
	for(i=0;i<n1;i++)
		for(j=0;j<n2;j++)
			if(s1[i]==s2[j])
			{
				s2[j]=' ';
				count=count+2;
				break;
			}
	printf("Count: %d",len-count);
	return 0;
}