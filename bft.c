#include<stdio.h>
void main()
	{
	int n,i,j,v,f,r,k,q[10],visited[10],cost[10][10];
	printf("enter the valus of n");
	scanf("%d",&n);
	printf("enter adjacent matrix of graph");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		scanf("%d",&cost[i][j]);
		}
	}
	printf(" enter source vertex");
	scanf("%d",&v);
	for(i=1;i<=n;i++)
	{
	visited[i]=0;
	}
f=0;
r=0;
k=1;
q[++r]=v;
f=r;
while(k<=n)
{
visited[v]=1;

for(j=1;j<=n;j++)
{
if((cost[v][j]!=0) && (visited[j]==0))
{
visited[j]=1;
q[++r]=j;
}
}
printf("%d",q[f]);
f=f+1;
v=q[f];
k=k+1;
}
}
