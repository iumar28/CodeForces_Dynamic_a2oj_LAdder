#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){
    int n;
    cin>>n;
    vector<bool> isprime(10000001,true);
    isprime[0]=isprime[1]=false;
    for(int i=2;i*i<=10000001;i++){
        if(isprime[i]==true){
            for(int j=i*i;j<=10000001;j+=i)
            {isprime[j]=false;}
        }
    }
    
    for(int i=2;i<=10000001;i++){
        if(n==0)
        {break;}
        if(isprime[i])
        {cout<<i<<" ";n--;}
    }

}