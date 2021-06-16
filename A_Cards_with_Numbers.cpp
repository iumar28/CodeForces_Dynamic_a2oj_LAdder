#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    int a[2*n];
    unordered_map<int,vector<int>> mp;
    for(int i=1;i<=2*n;i++)
    {cin>>a[i];
    mp[a[i]].emplace_back(i);
    }
    for(auto x:mp){
        if(x.second.size()%2==1)
        {cout<<-1;return 0;}
    }
   for(auto x:mp){
       for(auto lulu:mp[x.first])
       {cout<<lulu<<" ";}
       cout<<endl;
   }
   return 0;
}   