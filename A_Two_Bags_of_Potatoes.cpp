#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int y,k,n;
    cin>>y>>k>>n;
    int lulu=k-y%k;
    int tampu=n-y;
    
    // cout<<lulu<<endl;
 
    if(y>=n or y+lulu>n)
    {cout<<-1;return 0;}
   
    
   else if(lulu<n){     
        while(lulu<=tampu){
            cout<<lulu<<" ";
            lulu+=k;
        }   
    }   
    return 0;

}