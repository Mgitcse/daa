#include<stdio.h>
int quicksort(int a[],int p,int q);
int partition(int a[],int p,int q);
int a[10];
void main()
{
int i,n,p,q;
printf("enter the no of elements");
scanf("%d",&n);
printf("enter the elements of array");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
p=1;
q=n;
quicksort(a,p,q);
printf("sorted array");
for(i=1;i<=n;i++)
printf(" %d  ",a[i]);
}
int quicksort(int a[],int p,int q)
{
int j;
if(p<q)
{
j=partition(a,p,q);
quicksort(a,p,j-1);
quicksort(a,j+1,q);
}
return 0;
}
int partition(int a[],int p,int q)
{
int i,j,t,pivot;
i=p;
j=q;
pivot=a[i];
while(p<q)
{
while(a[i]<=pivot)
i=i+1;
while(a[j]>pivot)
j=j-1;
if(i<j)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
else
{
t=a[j];
a[j]=a[p];
a[p]=t;

}
return j;
}

}
