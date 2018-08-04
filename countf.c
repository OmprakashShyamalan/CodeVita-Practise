#include<stdio.h>
#include<stdlib.h>
int* count_frequency(unsigned long l)
{
	int i;
	int *a=(int*)malloc(11*sizeof(int));
	for(i=0;i<11;i++)
		a[i]=0;
	while(l>0)
	{
		a[l%10]++;
		l/=10;
		a[10]++;
	}	
	return a;
}
void print(int *arr,unsigned long l)
{
	int i,count=0;
	for(i=0;i<10;i++)
		if(arr[i]!=0)
			{
				printf("\nNo. Of %d's in %lu is %d",i,l,arr[i]);
				count++;
			}
	printf("\nCount of No. of Digits in %lu is %d",l,arr[i]);
	printf("\nNo. of Digits Used in %lu is %d\n",l,count);
}
int main()
{
	int *arr;
	unsigned long l;
	printf("Enter a Long integer: ");
	scanf("%lu",&l);
	arr=count_frequency(l);
	print(arr,l);
	getch();
	return 0;
}