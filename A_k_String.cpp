#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    bool checker=true;
    cin>>k;
    string str,ans;
    cin>>str;
    map<char,int> mp;
    for(int i=0;i<str.size();i++){
        mp[str[i]]++;
    }
    for(auto x:mp)
    {if(x.second%k!=0)
        {checker=false;}  
     else{ans.append(x.second/k,x.first);}
     }  
    if(checker==false)
    {cout<<-1;}
    else{
    while(k--)
    {cout<<ans;}
    }

    return 0;

}