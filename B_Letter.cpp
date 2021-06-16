#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    
    map<char,int> mp;
    bool ans=true;
    for(int i=0;i<s1.size();i++)
    {mp[s1[i]]++;}
    for(int i=0;i<s2.size();i++){
        if(mp[s2[i]]>0 or s2[i]==' ')
        {mp[s2[i]]--;continue;}
        else
        {ans=false;break;}
    }
    if(ans==true)
    {cout<<"YES";}
    else
    {cout<<"NO";}
    return 0;

}