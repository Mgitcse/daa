#include<stdio.h>
int m,u,w[20],p[20],i,n;
float mp=0.0,x[20];
void knapsack(int,int);
void main()
{
printf("enter no of objects");
scanf("%d",&n);
printf("enter profits in desc of p/w");
for(i=1;i<=n;i++)
scanf("%d",&p[i]);
printf("enter weights");
for(i=1;i<=n;i++)
scanf("%d",&w[i]);
printf("enter capacity of sack");
scanf("%d",&m);
knapsack(m,n);
}
void knapsack(int m, int n)
{
for(i=1;i<=n;i++)
x[i]=0;
u=m;
for(i=1;i<=n;i++)
{
if(w[i]>u)
break;
x[i]=1;
mp=mp+p[i];
u=u-w[i];
}
if(i<=n)
{
x[i]=(float)u/w[i];
mp=mp+(p[i] * x[i]);
}
printf("total profi =%f ",mp);
for(i=1;i<=n;i++)
printf("\n %f %d",x[i],p[i]);
}
