#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int  s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
        vector<int> v;
        
       v.emplace_back(s1);
        v.emplace_back(s2);
        v.emplace_back(s3);
        v.emplace_back(s4);
        sort(v.begin(),v.end());
        int max1,max2;
        max1=max(s1,s2);
        max2=max(s3,s4);
        if(max(max1,max2)==v[3] and min(max1,max2)==v[2])
        {cout<<"YES\n";}
        else
        {cout<<"NO\n";}
    }
    return 0;
}