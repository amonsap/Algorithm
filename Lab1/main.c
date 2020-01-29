#include <stdio.h>
#include <stdlib.h>
int ctnode;
int ctedge;
int adjm[105][105] = {0};
int main()
{
    int i=0 ;
    int j=0;
    int node1,node2;
    scanf("%d %d",&ctnode,&ctedge);
    for(i=0;i<ctedge;i++){
        scanf("%d %d",&node1,&node2);
        adjm[node1][node2] = 1;
    }
    for(i=0;i<ctnode;i++){
        for(j=0;j<ctnode;j++){
            printf("%5d",adjm[i][j]);
        }
    printf("\n");
    }

    return 0;
}
