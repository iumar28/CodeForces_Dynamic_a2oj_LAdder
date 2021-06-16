#include<bits/stdc++.h>
using namespace std;

int main(){
    int nn,t;
    cin>>nn>>t;
    string s;
    cin>>s;
    int n=s.size();
    for(int uu=0;uu<t;uu++){
        for(int i=0;i<n-1;i++){
            if(s[i]=='B' and s[i+1]=='G')
            {swap(s[i],s[i+1]);i++;}
            // if(s[n-i]=='B' and s[n-i-1]=='G')
            // {swap(s[n-i],s[n-i-1]);}
        }
        // cout<<s<<endl;
    }
    cout<<s<<endl;
    return 0;
}