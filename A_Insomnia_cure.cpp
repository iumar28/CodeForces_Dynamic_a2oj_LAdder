#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int k,l,m,n,d;
    int ans=0;
    cin>>k>>l>>m>>n>>d;
   for(int i=1;i<=d;i++){
       if(i%k==0 or i%l==0 or i%m==0 or i%n==0)
       {ans++;}
   }
   cout<<ans;
    return 0;

}