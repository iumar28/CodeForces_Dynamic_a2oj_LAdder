#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2,ans="";
    cin>>s1>>s2;
    int n=s2.size();
    for(int i=0;i<n;i++)
    {
        if((s1[i]=='0' and s2[i]=='0') or (s1[i]=='1' and s2[i]=='1'))
        {ans.push_back('0');}
        else
        {ans.push_back('1');}
    }
    cout<<ans;
    return 0;
}