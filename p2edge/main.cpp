#include <stdio.h>
#include <stdlib.h>
int ctnode;
int ctedge;
int adjm[10000][10000] = {0};
int nextnode[10000][10000] = {0};
int main()
{
    int i=0 ;
    int j=0;
    int k = 0;
    int node1,node2,weight,start,end;
    scanf("%d %d",&ctnode,&ctedge);

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
    scanf("%d %d",&start,&end);
    /*for(i=0;i<ctnode;i++)
    {
        for(j=0;j<ctnode;j++)
        {
            printf("%7d",adjm[i][j]);
        }
    printf("\n");
    }
*/
    for(k=0;k<ctnode;k++){
            for(i=0;i<ctnode;i++){
                for(j=0;j<ctnode;j++){
                    if(adjm[i][k] + adjm[k][j] < adjm[i][j]){
                                adjm[i][j] = adjm[i][k] + adjm[k][j];
                                nextnode[i][j] = k;
                            }
                }
                //printf("%d",adjm[i][j]);
            }
            //printf("\n");
    }
   /* printf("\n");
    for(i=0;i<ctnode;i++){
                for(j=0;j<ctnode;j++){

                        printf("%7d",adjm[i][j]);
                }
                printf("\n");
            }
*/
    //printf("\n");
    printf("%d",adjm[start][end]);


    return 0;
}
