#include<stdio.h>
#include<stdlib.h>
int c[20][20],r[20][20];
int find(int i,int j)
{
int m,z=0,min=10000;
for(m=r[i][j-1];m<=r[i+1][j];m++)
{
if((c[i][m-1]+c[m][j])<min)
{
min=c[i][m-1]+c[m][j];
z=m;
}
}
return z;
}

void main()
{
int i,k,j,m,n,p[20],w[20][20],q[20];
printf("enter the no of identifiers"); 
scanf("%d",&n);
printf("enter the p ");
for(i=1;i<=n;i++)
scanf("%d",&p[i]);
printf("enter the q");
for(i=0;i<=n;i++)
scanf("%d",&q[i]);
for(i=0;i<=n;i++)
{
w[i][i]=q[i];
c[i][i]=0;
r[i][i]=0;
w[i][i+1]=p[i+1]+q[i+1]+w[i][i];
c[i][i+1]=w[i][i+1];
r[i][i+1]=i+1;
}
for(m=2;m<=n;m++)
{
for(i=0;i<=n-m;i++)
{
j=i+m;
w[i][j]=p[j]+q[j]+w[i][j-1];
k=find(i,j);
c[i][j]=c[i][k-1]+c[k][j]+w[i][j];
r[i][j]=k;
}
}
printf("cost=%d ,weight=%d ,r=%d ",c[0][n],w[0][n],r[0][n]);
}
