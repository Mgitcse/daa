#include<stdio.h>
#include<stdlib.h>
int mcolor(int);
int x[10],n,m,k,cost[10][10];
int next(int);
void main()
{
int i,j;
for(i=1;i<=n;i++)
x[i]=0;
printf("enter no of vertices");
scanf("%d",&n);
printf("enter the order (m)");
scanf("%d",&m);
printf("enter cost matrix ");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&cost[i][j]);
mcolor(1);
}
int mcolor(int k)
{
int i=1;
while(i<=n)
{
next(k);
if(x[k]==0)
return ;
if(k==n)
{
for(i=1;i<=n;i++)
printf("%d",x[i]);
printf("\n");
}
else
mcolor(k+1);
i++;
}
}
int next(int k)
{
int i=1,j;
while(i<=n)
{
x[k]=(x[k]+1)%(m+1);
for(j=1;j<=n;j++)
{
if(cost[k][j]!=0 && x[k]==x[j]) 
break;
}
if(j==n+1)
return;
i++;
}
}





