#include <stdio.h>
#include <stdlib.h>
#define MAX 105
int ctnode;
int ctedge;
int adjm[MAX][MAX] = {0};
int main()
{
    int i=0 ;
    int j=0;
    int node1,node2,weight,start,end;
    scanf("%d %d",&ctnode,&ctedge);
    scanf("%d %d",&start,&end);

     for(i=0;i<ctnode;i++)
    {
        for(j=0;j<ctnode;j++)
        {
            adjm[i][j] = 9999;
        }
    }

    for(i=0;i<ctedge;i++)
    {
        scanf("%d %d %d",&node1,&node2,&weight);
        adjm[node1][node2] = weight;
        adjm[node2][node1] = weight;
    }
    for(i=0;i<ctnode;i++)
    {
        for(j=0;j<ctnode;j++)
        {
            printf("%7d",adjm[i][j]);
        }
    printf("\n");
    }

    int cost[MAX][MAX] = {0};
    int distance[MAX] = {0};
    int visited[MAX] = {0};
    int store[MAX] = {0};
    int min,nextnode,count;

    for(i=0;i<ctnode;i++)
    {
        for(j=0;j<ctnode;j++)
        {
            cost[i][j] = adjm[i][j];
        }
    }

    for(i=0;i<ctnode;i++)
    {
        distance[i] = cost[start][i];
        store[i]=start;
        visited[i]=0;
    }

    distance[start]=0;
    visited[start]=1;
    count=1;

    printf("\nstore = %d ",store[start]);
    printf("\ndistance is %d",distance[start]);
    printf("\nvisited is %d",visited[start]);

    while(count<ctnode-1)
    {

        min = 9999;
        for(i=0;i<ctnode;i++)
        {
            if(distance[i]<min&&!visited[i])
            {
                min=distance[i];
                nextnode=i;
            }
        }

        visited[nextnode]=1;
        for(i=0;i<ctnode;i++)
        {
            if(!visited[i])
            {
                if(min+cost[nextnode][i]<distance[i])
                {
                    distance[i]=min+cost[nextnode][i];
                    store[i]=nextnode;
                }
            }
        }
        count++;
    }

    for(i=0;i<ctnode;i++)
    {
        if(i!=start)
        {
            printf("\nDistance of node %d=%d",i,distance[i]);
            printf("\nPath = %d",i);

            j=i;
            do
            {
                j=store[j];
                printf("<--%d",j);
            }while(j!=start);
        }
    }
    return 0;
}
