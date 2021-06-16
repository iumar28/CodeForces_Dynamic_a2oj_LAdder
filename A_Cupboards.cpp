#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][2],count=0;
    for(int i=0;i<n;i++)
    {cin>>a[i][0]>>a[i][1];if(a[i][0]==0)count++;}
    cout<<count;

}