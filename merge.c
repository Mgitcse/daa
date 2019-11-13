#include<stdio.h>
int mergesort(int a[],int low,int high);
int merge(int a[],int low,int mid,int high);
int a[20],b[20];
void main()
{
	int n,i,low,high;
	printf("enter no of elements");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	low=1;
	high=n;
	mergesort(a,low,high);
printf("sorted order is");
for(i=1;i<=n;i++)
	printf(" %d",a[i]);
}
int mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
	mid=(low+high)/2;
	mergesort(a,low,mid);
	mergesort(a,mid+1,high);
	merge(a,low,mid,high);
	}
}
int merge(int a[],int low,int mid, int high)
{
	int i,j,k,h;
	h=low;i=low;j=mid+1;
	while((h<=mid)&&(j<=high))
	{
	if(a[h]<=a[j])
	{
	b[i]=a[h];
	h++;
	}
	else
	{
	b[i]=a[j];
	j++;
	}
	i++;
	}
	if(h>mid)
	{
	for(k=j;k<=high;k++)
	{
	b[i]=a[k];
	i++;
	}
	}
	else	
	{
	for(k=h;k<=mid;k++)
	{
	b[i]=a[k];
	i++;
	}
	}
	for(k=low;k<=high;k++)
	a[k]=b[k];
}

