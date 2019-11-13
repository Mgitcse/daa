import java.util.*;
import java.lang.*;

class matrix
{
static int find(int i,int j,int n,int p[],int m[][])
{
int [] z=new int[j];
int y=0,x,min;
for(x=i;x<=j-1;x++)
z[x]=m[i][x]+m[x+1][j]+(p[i-1]*p[x]*p[j]);
min=z[i];
for(x=i;x<j;x++)
{
if(z[x]<min)
min=z[x];
}
for(x=i;x<=j-1;x++)
{
if(min==z[x])
y=x;
}
return y;
}
public static void main(String args[])
{
int i,l,j,n,k;
Scanner s=new Scanner(System.in); 
System.out.println("enter th no of  matrix");
n=s.nextInt();
int p[]=new int[n+1];
int m[][]=new int[n+1][n+1];
System.out.println("enter the p matrix");
for(i=0;i<=n;i++)
{
p[i]=s.nextInt();
} 
for(i=1;i<n;i++)
{
m[i][i]=0;
m[i][i+1]=p[i-1]*p[i]*p[i+1];
}
m[n][n]=0;
for(l=1;l<=n-1;l++)
{
for(i=1;i<n-l+1;i++)
{
j=i+l;
k=find(i,j,n,p,m);
m[i][j]=m[i][k]+m[k+1][j]+(p[i-1]*p[k]*p[j]);
}
}
System.out.println("answer is="+m[1][n]);
}
}
