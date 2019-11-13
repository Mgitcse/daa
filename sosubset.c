#include<stdio.h>
void sum(int,int,int);
int n,w[10],x[10],m;
void main()
{
int i,r=0;
printf("\n enter no of elements");
scanf("%d",&n);
printf("enter the elements");
for(i=1;i<=n;i++)
{
scanf("%d",&w[i]);
r=r+w[i];
x[i]=0;
}
printf("enter sum to be calculated");
scanf("%d",&m);
sum(0,1,r);
printf("\n");
}
void sum(int s,int k,int r)
{
int i;
x[k]=1;
if(s+w[k]==m)
{
for(i=k+1;i<=n;i++)
x[i]=0;
for(i=1;i<=n;i++)
printf("%d",x[i]);
printf("\n");
}
else if((s+w[k]+w[k+1])<=m)
{
sum(s+w[k],k+1,(r-w[k]));
}
if((s+w[k+1]<=m)&&(s+r-w[k])>=m)
{
x[k]=0;
sum(s,k+1,(r-w[k]));
}
}
