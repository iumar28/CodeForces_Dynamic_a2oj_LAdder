#include<bits/stdc++.h>
using namespace std;
int countques(string &str){
    // cout<<str<<endl;
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='?')
        {count++;}
    }
    return count;
}

int main(){
   int k;
   cin>>k;
   string s;
   cin>>s;
   int q;
   cin>>q;
   while(q--){
       char va;
       int in;
       cin>>in>>va;
       s[in]=va;
    //    cout<<s<<endl;
       cout<<countques(s)<<endl;
   }
}