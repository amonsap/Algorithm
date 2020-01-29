#include <stdio.h>
#include <stdlib.h>
int ctnode;
int ctedge;
int ctwehig;
int start;
int end;
int adjm[100][100] = {0};
int main()
{
    int i = 0;
    int j = 0;
    int node1,node2;
    scanf("%d %d",&ctnode,&ctedge);
    scanf("%d %d",&start,&end);
    for(i=0;i<ctnode;i++){
        for(j=0;j<ctnode;j++){
            adjm[i][j] = 9999;
        }
    }

    for(i=0;i<ctedge;i++){
        scanf("%d %d %d",&node1,&node2,&ctwehig);
        if(ctwehig < adjm[node1][node2]){
        adjm[node1][node2] = ctwehig;
        adjm[node2][node1] = ctwehig;
        }
    }

    for(i=0;i<ctnode;i++){
        for(j=0;j<ctnode;j++){
            printf("%10d",adjm[i][j]);
        }
    printf("\n");
    }

    printf("\n");
    int k =0;
    int sum=0;
    while(start!=end){

        int col_1;
        int row = start+1;
        int min =adjm[start][0];
            for(i=start;i<row;i++){
                for(j=0;j<ctnode;j++){
                    if(adjm[start][j] <= min){
                        min = adjm[start][j];
                        col_1 = j;
                    }
                    printf("%10d %d %d",min,col_1,start);
                }
                printf("\n");
            }
            sum += min;
            printf("%10d\n",sum);
            int startNew = col_1;
            int RowNew = startNew+1;
            int colNew;
            int minNew = adjm[startNew][0];
            int sumNew;
            for(i=startNew;i<RowNew;i++){
                for(j=0;j<ctnode;j++){
                    if(adjm[startNew][j] <= minNew){
                            minNew = adjm[startNew][j];
                            colNew = j;
                        if(colNew == start && colNew != 0){
                            minNew = adjm[startNew][j-1];
                            colNew = j-1;
                        }else if(colNew == 0){
                            minNew = adjm[startNew][j+1];
                            colNew = j+1;
                        }
                    }
                        printf("%10d %d %d",minNew,colNew,start);
                    }
                    printf("\n");
                }
            sum += minNew;
            printf("%10d\n",sum);
            start = colNew;
        }


    /*int col2 = 0;
    int min2 = adjm[col][0] ;
    for(i=col;i<col+1;i++){
        for(j=0;j<ctnode;j++){
            if(adjm[col][j]!= adjm[col][sart]){
                if(adjm[col][j] <= min2)
                    min2 = adjm[col][j];
                    col2 = j;
            }
            printf("%10d",min2);
        }
         printf("%10d",col2);
         printf("\n");
    }
    sum += min2;
    printf("%10d",sum);
    printf("\n");
*/
    return 0;
}
