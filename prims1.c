#include<stdio.h>

void main()
{
        int i,j,k,l,n,min,mincost,cost[20][20],t[20][10],near[20];

        printf("Enter the no. of vertices: ");
        scanf("%d",&n);

        printf("Enter the cost matrix: \n");
        for(i=1;i<=n;i++)
                for(j=1;j<=n;j++)
                        scanf("%d",&cost[i][j]);

        mincost=cost[1][2];
        k=1;l=2;
        for(i=1;i<=n;i++)
                for(j=1;j<=n;j++)
                {
                        if(cost[i][j]!=0 && cost[i][j]<mincost)
                        {
                                mincost=cost[i][j];
                                k=i; l=j;
                        }
                }
        t[1][1]=k; t[1][2]=l; t[2][1]=1;

        for(i=1;i<=n;i++)
        {
                if(cost[i][l]<cost[i][k])
                        near[i]=l;
                else
                        near[i]=k;
        }
        near[k]=0;
        near[l]=0;

        for(i=2;i<=n-1;i++)
        {
                min=1000;
                for(j=1;j<=n;j++)
                {
                        if(near[j]!=0 && cost[j][near[j]]<min)
                        {
                                min=cost[j][near[j]];
                                t[i][1]=j;
                                t[i][2]=near[j];
                        }
                }
                j=t[i][1];
                mincost=mincost+cost[j][near[j]];
                near[j]=0;

                for(k=1;k<=n;k++)
                {
                        if(near[k]!=0 && cost[k][j]<cost[k][near[k]])
                                near[k]=j;
                }
        }
        printf("\nEdges present in Minimum Spanning tree are:");
        for(i=1;i<n;i++)
                printf("(%d,%d)\n",t[i][1],t[i][2]);
        printf("\nMincost= %d",mincost);
}


