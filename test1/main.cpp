#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

bool pim(int p1 , int p2){
    return p1 < p2;
}

int main()
{
    int data1[10000],data2[10000],N1,N2;
    int i = 0;
    scanf("%d",&N1);
    for(i=0;i<N1;i++){
        scanf("%d",&data1[i]);
    }
    scanf("%d",&N2);
    for(i=0;i<N2;i++){
        scanf("%d",&data2[i]);
    }
    int x[10];
    for(i=0;i<5;i++){
        scanf("%d",&x[i]);
    }
    sort(data1,data1+N1,pim);
    for(i=0;i<N1;i++){
        //printf("%5d",data1[i]);
    }
    //cout << endl;
    sort(data2,data2+N2,pim);
    for(i=0;i<N2;i++){
        //printf("%5d",data2[i]);
    }
    //cout << endl;
    for(i=0;i<5;i++){
        if(binary_search(data1,data1+N1,x[i])||(binary_search(data2,data2+N2,x[i]))){
            cout << "Y";
        }else
         cout << "N";
         cout << endl;
    }

    return 0;
}


