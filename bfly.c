#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,j;
printf("Enter Order of Matrix: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
  if(i>=j)
   printf("*");
  else
   printf(" ");
 }
 for(j=1;j<n;j++)
 {
  if(i+j>=n-1)
   printf("*");
  else
   printf(" ");
 }
 printf("\n");
}
for(i=1;i<n;i++)
{
 for(j=0;j<n;j++)
 {
  if(i+j<=n-1)
   printf("*");
  else
   printf(" ");
 }
 for(j=1;j<n;j++)
 {
  if(i<=j)
   printf("*");
  else
   printf(" ");
 }
 printf("\n");
}
return 0;
}