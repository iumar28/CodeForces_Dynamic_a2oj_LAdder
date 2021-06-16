#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n;
    cin>>n;
    int a[n][2];
    int capacity=0,maxi=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
        capacity=capacity+(a[i][1]-a[i][0]);
        // cout<<capacity<<" ";
        maxi=max(maxi,capacity);
        // cout<<maxi<<" ";
    }
    cout<<maxi;
}