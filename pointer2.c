#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int a=5;
int* ptr=(int*)malloc(sizeof(int));
printf("\nValue of a: %d",a);
printf("\nadres of a: %x",&a);
printf("\nValue of ptr: %x",ptr);
printf("\nadres of ptr: %x",&ptr);
printf("\nValue of *ptr: %x",*ptr);
printf("\nadres of *ptr: %x",&(*ptr));
printf("\nAfter ptr=&a");
ptr=&a;
printf("\nValue of a: %d",a);
printf("\nadres of a: %x",&a);
printf("\nValue of ptr: %x",ptr);
printf("\nadres of ptr: %x",&ptr);
printf("\nValue of *ptr: %x",*ptr);
printf("\nadres of *ptr: %x",&(*ptr));
return 0;
}