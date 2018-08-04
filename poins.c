#include<stdio.h>
#include<stdlib.h>
struct week
{
char t[20];
double e;
};
void main()
{
struct week w[2]={{"Om",3.5},{"Mahesh",4.5}};
//struct week *j={{"Om",3.5},{"Mahesh",4.5},{"Razak",6.7}};
struct week *j;
j=(struct week*)calloc(2,sizeof(struct week));
j[0]={"Razak",6.7};
j[1]={"Waran",4.4};
//printf("\n%s\t%lf",(*j).t,(*j).e);
printf("\n%s\t%lf",j->t,j->e);
//printf("\n%s\t%lf",(*(j+2)).t,(*(j+2)).e);
}