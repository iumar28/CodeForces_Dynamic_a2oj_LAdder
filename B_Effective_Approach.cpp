#include<bits/stdc++.h>
using namespace std;
#define int long long
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int32_t main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int n;
    cin>>n;
    // int a[n+1];
    int data;
    unordered_map<int,int> mp;
    for(int i=1;i<=n;i++)
    {cin>>data;
    mp[data]=i;}
    int m;
    cin>>m;
    int vasya=0,petya=0,leftcounter=1;
    while(m--){
        int q;
        cin>>q;
        vasya+=mp[q];
        petya+=n-mp[q]+1;
    //    for(int i=1;i<=n;i++){
    //        if(a[i]==q)
    //        {vasya+=i;
    //        petya+=n-i+1;}
        // }
       
    }
    cout<<vasya<<" "<<petya;
    
}