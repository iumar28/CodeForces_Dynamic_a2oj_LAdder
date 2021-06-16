#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n;
    cin>>n;
    int a[8],ans=0;
    for(int i=0;i<7;i++)
    {cin>>a[i];}
    int days=0,sum=a[0];
    while(sum<n){
        days++;
        days%=7;
        sum+=a[days];
    }
    cout<<days+1;
    
    return 0;    
}