#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3][3]={1};
    int temp[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
            a[i][j]%=2;

        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            a[i][j]==1?0:1;
            a[i+1][j]==1?0:1;
            a[i-1][j]==1?0:1;
            a[i][j-1]==1?0:1;
            a[i][j+1]==1?0:1;

        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j];
        }
        cout<<"\n";
    }
}