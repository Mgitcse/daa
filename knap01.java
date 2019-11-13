import java.util.*;
import java.lang.*;
class knap01
{
static int max(int a,int b)
{
return (a>b)?a:b;
}
static int knapsack(int w,int wt[],int p[],int n)
{
if(n==0||w==0)
return 0;
if(wt[n-1]>w)
return knapsack(w,wt,p,n-1);
else
return max(p[n-1]+knapsack(w-wt[n-1],wt,p,n-1),knapsack(w,wt,p,n-1));
}
public static void main(String args[])
{
int p[]=new int[30];
int wt[]=new int[30];
int i,w,n;
Scanner in =new Scanner(System.in);
System.out.println("enter no of elements");
n= in.nextInt();
System.out.println("enter profits");
for(i=0;i<n;i++)
p[i]=in.nextInt();
System.out.println("enter the weights");
for(i=0;i<n;i++)
{
wt[i]=in.nextInt();
}
System.out.println("enter capacity");
w=in.nextInt();
System.out.println(knapsack(w,wt,p,n));
}
}


