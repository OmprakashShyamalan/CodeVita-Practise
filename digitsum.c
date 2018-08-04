#include<stdio.h>
#include<conio.h>
#include<string.h>
int superDigit(char*,int);
int sum(int);
int sum(int a)
{
    int temp=0; 
    if(a<10)
	return a;
    while(a>0)
    {
        temp=temp + a%10;
        a=a/10;
    }
    return sum(temp);
}
int superDigit(char* n, int k) {
    int l=strlen(n);
    int digit=0;
    if(l==0)
        return digit;
    else
    {
      	digit=(n[l-1]-'0')*k;
        n[l-1]='\0';
	printf("%d",digit);
        digit=sum(digit);
        digit+=superDigit(n,k);
    }
    return sum(digit);
}
int main()
{
	char n[32767];
	int p;
	scanf("%s",n);
	scanf("\n");
	scanf("%d",&p);
	printf("\n%d\n\n",superDigit(n,p));
	getch();
	return 0;
}