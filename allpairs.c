#include<stdio.h>
#include<stdlib.h>
void main()
{
int cost[30][30],i,j,k,n;
int a[30][30];
printf("enter no of vertices:");
scanf("%d",&n);
printf("enter cost matrix:");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&cost[i][j]);

for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
a[i][j]=cost[i][j];

for(k=1;k<=n;k++)
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
if(a[i][k]+a[k][j]<cost[i][j])
a[i][j]=a[i][k]+a[k][j];

for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
}
