#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
        {cin>>a[i][j];}
    }
    cout<<a[1][2]+a[2][1]+a[0][4]+a[4][0]+a[0][3]+a[2][0]+a[4][3]+a[3][4]+a[0][4]+a[4][0]+a[4][3]+a[3][4];

}