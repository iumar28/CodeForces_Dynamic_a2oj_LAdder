#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=-1;
    int mini=INT_MAX,maxi=INT_MIN;
    cin>>n;
    vector<pair<int,int>> pi;
    for(int i=1;i<=n;i++){
        
        int p,q;
        cin>>p>>q;
        pi.push_back(make_pair(p,q));
        mini=min(mini,p);
        maxi=max(maxi,q);
    }
    int counter=0;
    for(auto x:pi){
        counter++;
        if(x.first==mini && x.second==maxi)
        {ans=counter;break;}
    }
    cout<<ans;
}