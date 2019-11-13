#include<stdio.h>
int mp=0,p[10],i,q,r,n,k,d[10],j[10];
void main()
{
printf("enter th no of jobs");
scanf("%d",&n);
printf("enter the profit");
for(i=1;i<=n;i++)
scanf("%d",&p[i]);
printf("enter the deadlines");
for(i=1;i<=n;i++)
scanf("%d",&d[i]);
d[0]=0;j[0]=0;j[1]=1;
k=1;
r=k;
for(i=2;i<=n;i++)
{
while((d[j[r]]>d[i]) && (d[j[r]]!=r))
r=r-1;
if(d[r] <= d[i] && d[i]>r)
{
for(q=k;q>r;q--)
j[q+1]=j[q];
j[r+1]=i;
k=k+1;
r=k;
}
}
for(i=1;i<=k;i++)
{
printf("%d \n",j[i]);
mp=mp+p[j[i]];
}
printf("\nmax profit is %d",mp);
}
