#include<bits/stdc++.h>
using namespace std;
// #define int long long

int32_t main(){
    int n,count=0,temp;
    cin>>n;
    set<pair<int,int>> s;
    for(int i=1;i<=n;i++){
        for(int j=i;(i*i)+(j*j)<=(n*n);j++){
            temp=i*i+j*j;

            if(int(sqrt(temp))*int(sqrt(temp))==temp)
            {count++;}
           
        }
    }
    cout<<count;
}