#include <stdio.h>
#include <stdlib.h>
#define MAX 99999
int ctnode;
int ctedge;
int adjm[5000][5000] = {0};
int nextnode[5000][5000] = {0};
int main()
{
   int i=0 ;
    int j=0;
    int k = MAX;
    int p = MAX;
    int node1,node2,weight,start1,start2;
    scanf("%d %d",&ctnode,&ctedge);
         for(i=0;i<ctnode;i++)
    {
        for(j=0;j<ctnode;j++)
        {
            adjm[i][j] = MAX;
        }
    }
    for(i=0;i<ctedge;i++)
    {
        scanf("%d %d %d",&node1,&node2,&weight);
        adjm[node1][node2] = weight;
        adjm[node2][node1] = weight;
    }
    scanf("%d %d",&start1,&start2);

    for(i=0;i<ctnode;i++)
    {
        for(j=0;j<ctnode;j++)
        {
            printf("%7d",adjm[i][j]);
        }
    printf("\n");
    }
    printf("\n");
    //int k = 0;
  /*  for(i=0;i<ctnode;i++){
        if(adjm[start1][i] < adjm[start1][i+1]){
            k = adjm[start1][i];
        }
        printf("%7d",k);
    }
    printf("\n");

    //int p = 0;
    for(i=0;i<ctnode;i++){
        if(adjm[start2][i] < adjm[start2][i+1]){
            p = adjm[start2][i];
        }
        printf("%7d",p);
    }*/

    int no1,no2;
     //printf("\n");

                for(j=0;j<ctnode;j++){
                    if(adjm[start1][j] < k){
                            k = adjm[start1][j];
                            no1 = j;
                    }
                    printf("%7d %d",k,no1);
                }

        printf("\n");
                for(j=0;j<ctnode;j++){
                    if(adjm[start2][j] < p){
                            p = adjm[start2][j];
                            no2 = j;
                    }
                    printf("%7d %d",p,no2);
                }

    printf("\n");
    if(k < p){
        printf("%d\n%d",k,no1);
    }else{
        printf("%d\n%d",p,no2);
    }
    return 0;
}
