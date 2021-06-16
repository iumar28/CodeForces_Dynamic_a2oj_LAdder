#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,mini=INT_MAX;
    cin>>n;
    vector<int> a;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int data;cin>>data;
        a.emplace_back(data);
    mini=min(mini,data);
    mp[data]++;
    }
    
    auto it=mp.begin();
    // cout<<it->first<<endl;
    // cout<<it->second;
    int no=it->first;
   if(it->second>1)
   {cout<<"Still Rozdil";}
   else
   {
      for(int i=0;i<n;i++)
      {if(a[i]==mini)
      {cout<<i+1;break;}}
   }


   

    return 0;
}