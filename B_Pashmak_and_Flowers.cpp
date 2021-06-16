#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n,mini=INT_MAX,maxi=INT_MIN;
    cin>>n;
    vector<int> v;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        int data;cin>>data;
        v.emplace_back(data);
        mini=min(mini,data);
        maxi=max(maxi,data);
        mp[data]++;
    }
    int ans=mp[maxi]*mp[mini];
    if(mp.size()==1)
    {ans=n*(n-1)/2;}

    int dif=maxi-mini,count=0;
    cout<<dif<<" "<<ans;


}