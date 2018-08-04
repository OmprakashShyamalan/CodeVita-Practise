#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char*,char*);
int permute(char*,int,int);
int check(char*);
int main()
{
int n,i,l=0;
printf("Enter N value:");
scanf("%d",&n);
char *ch=(char*)malloc((n+1)*sizeof(char));
for(i=0;i<n;i++)
	ch[i]=i+'1';
ch[i]='\0';
printf("String:%s\n",ch);
l=permute(ch,0,n-1);
printf("\nThe Count is %d",l);
return 0;
}
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int permute(char *a, int l, int r)
{
   int i,count=0;
   if (l==r)
    { 
	if(check(a))
	{
	printf("%s\n",a);
	count++;
	}
   }
   else
   {
       for (i = l; i <= r; i++)
       {      
	  swap((a+l), (a+i));
       	  count+=permute(a, l+1, r);
          swap((a+l), (a+i)); //backtrack
       }
   }
    return count;
}
int check(char *s)
{
	int p=0,e=0,i=0;
	int len=strlen(s);
	while(i+1<len && s[i]<s[i+1])
		{i++;p++;}
	while(i+1<len && s[i]>s[i+1])
		{i++;e++;}
	if(i==len-1 && p!=0 && e!=0)
		return 1;
	else
		return 0;
}