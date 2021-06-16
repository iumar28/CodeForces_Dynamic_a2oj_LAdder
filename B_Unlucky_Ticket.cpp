#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    while(n){
        int ones=n%10;
        cout<<ones<<" ";
        // v.emplace_back(ones);
        n=n/10;
    }
    for(auto x:v){
        cout<<x<<" ";
    }

}