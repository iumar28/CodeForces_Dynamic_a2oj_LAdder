#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v;
    for(int i=0;i<m;i++){
        int data;cin>>data;
        v.emplace_back(data);
    }
    int mini=INT_MAX;
    sort(v.begin(),v.end());
    for(int i=1;i<m-n;i++)
    {
        mini=min(mini,v[i+n-1]-v[i]);
    }
    cout<<mini;
    return 0;
}