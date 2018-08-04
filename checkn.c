#include<stdio.h>
#include<stdlib.h>
int* count_frequency(char* l)
{
	int i;
	int* a=(int*)malloc(11*sizeof(int));
	for(i=0;i<11;i++)
		a[i]=0;
	for(i=0;l[i]!='\0';i++)		
	{
		a[l[i]]++;	
		a[10]++;	
	}	
	return a;
}
void print(int* arr,char* l)
{
	int i,count=0;
	for(i=0;i<10;i++)
	if(arr[i]!=0)
	{
	printf("\nNo. Of %d's in %s is %d",i,l,arr[i]);
	count++;
	}
printf("\nCount of No. of Digits in %lu is %d",l,arr[i]);
printf("\nNo. of Digits Used in %lu is %d\n",l,count);
}
char* check_equals(char* l1,char* l2)
{
	int *a=count_frequency(l1);
	int *b=count_frequency(l2);
	printf("\n\nNumber Summary of %s\n",l1);
	print(a,l1);
	printf("\n\nNumber Summary of %s\n",l2);
	print(b,l2);
	int i;
	for(i=0;i<10;i++)
		if(a[i]!=b[i])	
			return "Not Equals";
	return "Equals";
}
int main()
{
	unsigned long l1,l2;
	printf("Enter the First Long Integer: ");
	scanf("%s",&l1);
	printf("Enter the Second Long Integer: ");
	scanf("%s",&l2);
	printf("\n%s\n",check_equals(l1,l2));
	getch();
	return 0;
}