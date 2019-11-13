#include<stdio.h>
void main()
{
int n,i,j,cost[10][10],visited[10],k,s[10],top=-1,v;
printf("enter no of vertices");
scanf("%d",&n);
printf("enter the cost matrix");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&cost[i][j]);
}
}
printf("enter source vertex");
scanf("%d",&v);
for(i=1;i<=n;i++)
visited[i]=0;
k=1;
while(k<=n)
{
visited[v]=1;

top=top+1;
s[top]=v;
printf("%d",v);
for(j=1;j<=n;j++)
{
if((cost[v][j]!=0)&&visited[j]==0)
{
v=j;
break;
}
}
top=top-1;
k++;
}
}
