#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int x;
    unordered_map<int,int> mp;
    for(int i=0;i<4;i++)
    {cin>>x;
    mp[x]++;
    }
    cout<<4-mp.size();
    

}