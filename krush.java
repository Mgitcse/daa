import java.util.*;
public class krush
{
static int path[];
static int n,m,mincost,i,j;
public static void main(String args[]) throws Exception
{
Scanner s=new Scanner(System.in);
System.out.println("enter the number of vertices in the graph");
n=s.nextInt();
System.out.println("enter th no of edges");
m=s.nextInt();
path =new int[n+1];
Edge e[]=new Edge[m];
Edge t=new Edge();
for(i=0;i<m;i++)
{
e[i]=new Edge();
System.out.println("enter 2 vertices & weight of edge");
System.out.println("1 vertex");
e[i].u=s.nextInt();
System.out.println("2 vertex");
e[i].v=s.nextInt();
System.out.println("weight");
e[i].wt=s.nextInt();
}
for(i=0;i<=m-1;i++)
{
for(j=0;j<m-i-1;j++)
{
if(e[i].wt>e[j+1].wt)
{
t=e[j];
e[j]=e[j+1];
e[j+1]=t;
}
}
}
for(i=1;i<=n;i++)
path[i]=0;
i=0;
j=0;
mincost=0;
System.out.println();
while((i!=n-1) &&(j!=m))
{
System.out.println("edge("+e[j].u +","+e[j].v+")"+"with weight"+e[j].wt+" ");
if(checkcycle(e[j]))
{
mincost=mincost+e[j].wt;
i++;
System.out.println("is selected");
}
else
{
System.out.println("is discarded");
}
j++;
}
if(i!=n-1)
{
System.out.println("minimum spanning tree can't be formed");
s.close();
}
}
static boolean checkcycle(Edge e)
{
int u=e.u,v=e.v;
while(path[u]>0)
u=path[u];
while(path[v]>0)
v=path[v];
if(u!=v)
{
path[u]=v;
return true;
}
return false;
}
static class Edge
{
int u,v,wt;
}
}



