#include<stdio.h>
#include<string.h>
int check_symbol(char);
void swap(char*,char*);
int main()
{
	char s[1000];
	int i=0,j;
	printf("Enter a String: ");
	scanf("%[^\n]s",s);
	j=strlen(s);
	j=j-1;
	while(i<j)
	{
		if(check_symbol(s[i]))
		{	
			i++;
		}
		else if(check_symbol(s[j]))
		{
			j--;
		}
		else
		{
			swap(&s[i],&s[j]);
			i++;
			j--;
		}
	}
	printf("Answer: %s",s);
return 0;
}
void swap(char* a,char *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}
int check_symbol(char a)
{
	if('0'<=a && a<='9')
		return 0;
	if('a'<=a && a<='z')
		return 0;
	if('A'<=a && a<='Z')
		return 0;
	return 1;
}