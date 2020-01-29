#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
    bool cmpmin(int p1, int p2)
    {
        return p1 < p2;
    }
int main()
{
    int data1[50000];
    int data2[50000];
    int N1,N2;
    int i=0;
    cin >> N1;
    for(i=0;i<N1;i++){
        cin >> data1[i];
    }
    cin >> N2;
    for(i=0;i<N2;i++){
        cin >> data2[i];
    }
    int x1[10];
    for(i=0;i<5;i++){
        cin >> x1[i];
    }
    sort(data1,data1+N1,cmpmin);
    for(i=0;i<N1;i++){
    }
    sort(data2,data2+N2,cmpmin);
    for(i=0;i<N2;i++){
    }

    for(i=0;i<5;i++){
            if(binary_search(data1,data1+N1,x1[i])|| binary_search(data2,data2+N2,x1[i]))
            cout << "Y" ;
            else
            cout << "N";
            cout<<endl;
    }

    return 0;
}
