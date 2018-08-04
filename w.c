int * clean()
{
int y[3]={3,5,7};
return y;
}
void main()
{
int *q=clean();
int r=0;
while(r<3)
{
printf("%d",*(q+r));
r++;
}
}