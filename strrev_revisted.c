#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char st[1000],s2[10],wrd_arr[20][20];
int i=0,j=0,k=0,wc;
printf("Enter the Sentence: ");
scanf("%[^\n]s",st);
printf("Enter Compare String:" );
scanf("%s",s2);
while(st[k]!='\0')
{
	if(st[k]==' ')
	{
		wrd_arr[i][j]='\0';
		i++;
		j=0;
	}
	else
	{	
		wrd_arr[i][j]=st[k];
		j++;
	}
	k++;
}
wrd_arr[i][j]='\0';
wc=i+1;
while(i>=0)
{
	if(!strcmp(s2,wrd_arr[i]))
		strrev(wrd_arr[i]);
	printf("%s ",wrd_arr[i]);	
	i--;
}
return 0;
}		