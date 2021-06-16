#include<bits/stdc++.h>
using namespace std;
// #define int long long
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int ans=0;
       vector<int> even,odd;
       for(int i=0;i<n;i++){
           int x;
           cin>>x;
           if(x%2)
           {even.emplace_back(x);}
           else
           {odd.emplace_back(x);}
       }
       int e=even.size();
       int o=n-e;
       ans=e*o;
       
       for(int i=0;i<o;i++){
           for(int j=i+1;j<o;j++){
               if(__gcd(odd[i],2*odd[j])>1)
               {ans++;}
           }
           ans+=(e*(e-1)/2);
           cout<<ans<<endl;


       }

    }
}