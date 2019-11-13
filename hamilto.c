#include <stdio.h>
void hamiltonian(int);
void nextvalue(int);
int x[20],n,i,j,cost[10][10];
void main()
{
printf("enter no of vertices:");
scanf("%d",&n);
printf("enter cost matrix:");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&cost[i][j]);
}
}
for(i=1;i<=n;i++)
x[i]=0;
x[1]=1;
printf("solution set:\n");
hamiltonian(2);
}
void hamiltonian(int k)
{
do
{
nextvalue(k);
if(x[k]==0)
return;
if(k==n)
{
for(i=1;i<=n;i++)
printf("%d-",x[i]);
printf("%d \n",x[1]);
}
else
hamiltonian(k+1);
}while(k<n+1);
}


void nextvalue(int k)
{
while(1)
{
x[k]=(x[k]+1)%(n+1);
if(x[k]==0)
return;
if(cost[x[k-1]][x[k]]!=0)
{
for(j=1;j<=k-1;j++)
if(x[k]==x[j])
break;
if(j==k)
{
if((k<n) || (k==n && cost[x[n]][x[1]]!=0))
return;
}
}
}
}


