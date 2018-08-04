#include<stdio.h>
#include<stdlib.h>
int * clean()
{
int y[3],*z;
y[0]=3;
y[1]=2;
y[2]=45;
z=y;
return y;
}
void main()
{
int *q=clean();
int r=0;
//while(r<3)
//{
printf("\n%d",*(q+0));
printf("\n%d",*(q+1));
printf("\n%d",*(q+2));
//q++;r++;
//}
}