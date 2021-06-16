#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,ans;
    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='-' and s[i+1]=='.')
        {ans.push_back('1');s[i]=s[i+1]='@';i+=1;}

       else if(s[i]=='-' and s[i+1]=='-')
        {ans.push_back('2');s[i]=s[i+1]='@';i+=1;}

       else if(s[i]=='.')
        {ans.push_back('0');s[i]='@';}
    }
    // cout<<s<<endl;
    cout<<ans;
}