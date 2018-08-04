#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int fact(int);
void swap(char*,char*);
void sort(char*);
void clear(char*,int);
int main()
{
char str[100],tmp[100],*wrd,temp;
int i=0,l,len,count,r,rc;
printf("Enter A String: ");
scanf("%s",str);
printf("Enter a Rank: ");
scanf("%d",&r);
rc=r-1;
strcpy(tmp,str);
sort(tmp);
len=strlen(tmp);
l=len-1;
wrd=(char*)malloc(len*sizeof(char));
while(i<len)
{
	if(rc!=0)
		count=rc/fact(l);
	else
		count=0;
	wrd[i++]=tmp[count];
	clear(tmp,count);
	rc=rc-(count*fact(l));
	l--;
}
wrd[i]='\0';
printf("The Word for rank %d is %s",r,wrd);
return 0;
}
void clear(char *a,int n)
{
	int i=0,l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(i>=n)
			a[i]=a[i+1];
	}
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