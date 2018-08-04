#include<stdio.h>
#include<string.h>
int fact(int);
void swap(char*,char*);
void sort(char*);
int main()
{
char str[100],tmp[100];
int j=0,i=0,l,len,sum=0;
printf("Enter A String: ");
scanf("%s",str);
strcpy(tmp,str);
sort(tmp);
len=strlen(tmp);
l=len-1;
while(str[j]!='\0')
{
	int count=0;
	for(i=0;i<len;i++)	
	{
		if(tmp[i]==str[j])
			{
				tmp[i]=' ';	
				break;
			}
		else
			if(tmp[i]!=' ')
				count++;
	}
	sum=sum +(count *fact(l));
	l--;
	j++;
}
printf("The Rank of %s is %d",str,sum+1);
return 0;
}
int fact(int n)
{
	if(n==1 || n==0) 
		return 1;
	else
		return n*fact(n-1);
}
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void sort(char *a)
{
	int l=strlen(a),i,j;
	for(i=0;i<l;i++)
		for(j=i;j<l;j++)
			if(a[i]>a[j])
				swap((a+i),(a+j));
}