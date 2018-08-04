#include<stdio.h>
#include<conio.h>
int main()
{
int n,m,t;
double d;
//scanf("%d",&t);
//while(t--)
{
printf("Enter No. of Tires: ");
scanf("%d",&n);
printf("Enter No. of Kms Each can Run: ");
scanf("%d",&m);
d= (double)(n*m)/4;
printf("%0.1lf",d);
}
getch();
return 0;
}
