#include <stdio.h>
#include <stdlib.h>
int ctnode;
int ctedge;
int adjm[10000][10000] = {0};
int nextnode[10000][10000] = {0};
int main()
{
    int i=0;
    int j=0;
    int k=0;
    int startnode,endnode,node1,node2,weg;
    scanf("%d %d",&ctnode,&ctedge);
    for(i=0;i<ctnode;i++){
        for(j=0;j<ctnode;j++){
            adjm[i][j]=999999;
        }
    }
    for(i=0;i<ctedge;i++){
        scanf("%d %d %d",&node1,&node2,&weg);
        adjm[node1][node2] = weg;
        adjm[node2][node1] = weg;
    }

    scanf("%d %d",&startnode,&endnode);

  /*  for(i=0;i<ctnode;i++){
        for(j=0;j<ctnode;j++){
            printf("%7d",adjm[i][j]);
        }
        printf("\n");
    }*/
    //printf("\n");
    for(k=0;k<ctnode;k++){
        for(i=0;i<ctnode;i++){
            for(j=0;j<ctnode;j++){
                if(adjm[i][k]+adjm[k][j] < adjm[i][j]){
                    adjm[i][j] = adjm[i][k]+adjm[k][j];
                    nextnode[i][j] = k;
                }
            }
        }
    }
    /*for(i=0;i<ctnode;i++){
        for(j=0;j<ctnode;j++){
            printf("%7d",adjm[i][j]);
        }
        printf("\n");
    }*/
    //printf("\n");
    printf("%d",adjm[startnode][endnode]);
    return 0;
}
