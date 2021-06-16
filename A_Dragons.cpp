#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n;
    bool ans=true;
    cin>>s>>n;
    vector<pair<int,int>> v;
    while(n--){
        int x,y;
        cin>>x>>y;
        v.emplace_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    for(auto x:v){
        if(x.first<s)
        {s+=x.second;}
        else
        {ans=false;}
    }
    if(!ans)
    {cout<<"NO";}
    else
    {cout<<"YES";}

    return 0;
    
}