#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    bool ans=false;
    // int temp=n;
    vector<int> v;
    while(n>0){
        int uu=n%10;
        if(uu==4 or uu==7)
        {v.emplace_back(uu);}
        n/=10;
    }
    if(v.size()==4 or v.size()==7)
    {ans=true;}
    if(ans)
    {cout<<"YES\n";}
    else
    {cout<<"NO\n";}

    return 0;

}