#include<stdio.h>
int rbin(int a[],int l,int h,int x);
void main()
{
int a[10],l,h,mid,x,i,n,z;
printf("enter the no of elements");
scanf("%d",&n);
printf("enter the elements of array");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
printf("enter the element to be searched");
scanf("%d",&x);
l=1;
h=n;
z=rbin(a,l,h,x);
if(z==0)
printf("element%d not found",x);
else
printf("%d element is found in location %d",x,z);
}
int rbin(int a[],int l,int h,int x)
{
int m;
if(l==h)
{
if(x==a[l])
return l;
else
return 0;
}
else
{
m=(l+h)/2;
if(x==a[m])
return m;
if(x<a[m])
return rbin(a,l,m-1,x);
else 
return rbin(a,m+1,h,x);
}
}
