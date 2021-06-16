#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    map<int,int> mp;
    for(int i=0;i<s.size();i++)
    {mp[s[i]]++;}
    int count=0;


    for(auto x:mp)
    {if(x.second%2==1)
    {count++;}}
    
    // cout<<count<<endl;
    if(count<=1)
    {cout<<"First";}
    else if(count%2==1)
    {cout<<"First";}
    else
    {cout<<"Second";}
}