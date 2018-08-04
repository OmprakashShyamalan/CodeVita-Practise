#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int compare(char*,char*);
int* list(char*);
int main()
{
	char s1[100],s2[100];
	printf("Enter String1: ");
	scanf("%s",s1);
	printf("Enter String2: ");
	scanf("%s",s2);
	printf("Count: %d",compare(s1,s2));
	return 0;
}
int compare(char* st1,char* st2)
{
	int *a=list(st1);
	int *b=list(st2);
	int i=0,count=0;
	for(i=0;i<26;i++)
		count+=abs(a[i]-b[i]);
	return count;
}
int* list(char *st)
{
	int *a=(int*)malloc(26*sizeof(int));
	int i=0;
	for(i=0;i<26;i++)
		a[i]=0;
	for(i=0;st[i]!='\0';i++)
		if('a'<= st[i] && st[i]<='z')
			a[st[i]-'a']++;
		else
			a[st[i]-'A']++;
	return a;
}