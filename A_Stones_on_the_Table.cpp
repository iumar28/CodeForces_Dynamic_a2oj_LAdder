#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int r=0,b=0,g=0;
    for(int i=1;i<n ;i++){
        if(s[i]==s[i-1]){
            if(s[i]=='R')r++;
            if(s[i]=='G')g++;
            if(s[i]=='B')b++;

        }
    }
    cout<<r+b+g;
    return 0;
}