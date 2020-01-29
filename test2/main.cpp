#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
int ctnode;
int adjm[15000][15000] = {0};
int ctedge;
int nextnode[15000][15000] = {0};
int main()
{
    int start,end,node1,node2,weg;
    int i=0;
    int j=0;
    int k=0;
    int MAX = 99999;
    scanf("%d %d",&ctnode,&ctedge);

    for(i=0;i<ctnode;i++){
        for(j=0;j<ctnode;j++){
            adjm[i][j] = MAX;
        }
    }

    for(i=0;i<ctedge;i++){
        scanf("%d %d %d",&node1,&node2,&weg);
        adjm[node1][node2] = weg;
        adjm[node2][node1] = weg;
    }

    scanf("%d %d",&start,&end);

    for(i=0;i<ctnode;i++){
        for(j=0;j<ctnode;j++){
            printf("%7d",adjm[i][j]);
        }
        printf("\n");
    }

    for(k=0;k<ctnode;k++){
        for(i=0;i<ctnode;i++){
            for(j=0;j<ctnode;j++){
                if(adjm[i][k]+adjm[k][j] < adjm[i][j]){
                    adjm[i][j] = adjm[i][k]+adjm[k][j];
                    nextnode[i][j] = k;
                }
                    //printf("%7d",adjm[i][j]);
            }
            //printf("\n");
        }

    }
    printf("\n");
        for(i=0;i<ctnode;i++){
            for(j=0;j<ctnode;j++){
            printf("%7d",adjm[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("%7d",adjm[start][end]);

    return 0;
}
