#include<bits/stdc++.h>
using namespace std;

int main(){
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    string s;
    cin>>s;
    bool ans=false;
    for(int i=0;i<s.size();i++){
        if(s[i]>=33 and s[i]<=126){
        if(s[i]=='H' or s[i]=='Q' or s[i]=='9'  )
        {ans=true;}
        }
    }
    if(ans)
    {cout<<"YES";}
    else
    {cout<<"NO";}

    return 0;
}