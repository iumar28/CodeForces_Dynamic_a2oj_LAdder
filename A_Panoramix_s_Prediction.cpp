#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229};
    unordered_map<int,int> mp;
    int counter=0;
    for(auto x:v){
        mp[x]=++counter;
    }
    int a,b;
    cin>>a>>b;
      
    if(abs(mp[a]-mp[b])==1 and mp[a]!=0 and mp[b]!=0)
    {cout<<"YES\n";}
    else 
    {cout<<"NO\n";}

    return 0;
}