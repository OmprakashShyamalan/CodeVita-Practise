#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	unsigned int a,b,n,i,k,temp,rem=0;
	char *val;
	scanf("%u%u",&a,&b);
	n=floor(b*log10(a));
	n=n+1;
        printf("\n%u\n",n);
	val=(char*)malloc((n+1)*sizeof(char));
	val[0]='1';
	val[1]='\0';
	for(i=0;i<b;i++)
	{
		k=0;rem=0;
		while(val[k]!='\0')
		{
			temp=(val[k]-'0')*a+(rem%10);
			val[k]=(temp%10)+'0';
			rem=(rem/10) + (temp/10);
			k++;
		}
		while(rem!=0)
		{
			val[k]=rem%10 +'0';
			rem=rem/10;
			k++;
		}
		val[k]='\0';
	}
	strrev(val);	
printf("\n%s,%u",val,strlen(val));
	return 0;
}	