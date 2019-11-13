#include<stdio.h>
void main()
{
int n,cost[20][20],v,s[20],dist[20],i,j,k,u,num,min;
printf("enter no of vertices");
scanf("%d",&n);
printf("enter cost matrix");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++){
scanf("%d",&cost[i][j]);
if(cost[i][j]==0)
cost[i][j]=99;
}
printf("enter source vertex");
scanf("%d",&v);
for(i=1;i<=n;i++)
{
s[i]=0;
dist[i]=cost[v][i];
}
s[v]=1;
dist[v]=0;
for(num=2;num<=n;num++)
{
k=1;
min=99;
for(i=1;i<=n;i++)
{
if(s[i]!=1&&dist[i]<min)
{
min=dist[i];
u=i;
}
}
s[u]=1;
for(i=1;i<=n;i++)
if(dist[u]+cost[u][i]<dist[i]&&s[i]!=1)
dist[i]=dist[u]+cost[u][i];
}
for(i=1;i<=n;i++)
{
if(i!=v&&dist[i]!=999)
printf("%d----%d min cost=%d \n",v,i,dist[i]);
}
printf("\n");
}
