#include<stdio.h>
#include<math.h>
int place(int k,int i);
int queen(int k, int n);
int x[10];
void main()
{
int i,n,k,j;
	printf("enter the no of queens ");
	scanf("%d",&n);
	queen(1,n);
}
	int queen(int k,int n)
	{
int i,j;
		for(i=1;i<=n;i++)
		{
			if(place(k,i))	
			{		
				x[k]=i;
			if(k==n)				
			{
			for(j=1;j<=n;++j)
			printf("%d",x[k]);
			}
			else			
			queen(k+1,n);
		 	
			}
		}
	}
	int place(int k,int i)
	{
	int j;
		for(j=1;j<=k-1;j++)
		{
			if((i==x[j]) || (abs(j-k)==abs(i-x[j])))
			return 0;
		}
			return 1;
	}

