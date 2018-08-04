#include<stdio.h>
#include<conio.h>
#include<math.h>
int powerSum(int X, int N,int i) {
    int j,count=0,n2=0;
    if (X == 0) return count+1;
	   if (X < 0) return 0;
    for (j = i; n2 >= 0; ++j) {
        n2 = X - (int)pow(j,N);
        count+=powerSum(n2, N,j+1);
    }
    return count;

}
int main()
{
	int n,p;
	scanf("%d%d",&n,&p);
	printf("\n%d\n\n",powerSum(n,p,1));
	getch();
	return 0;
}