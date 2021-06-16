#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;
    vector<int> v(12);
    for(int i=0;i<12;i++)
    {int data;cin>>data;v.emplace_back(data);}
    sort(v.begin(),v.end(),greater<int>());
    
    int temp=0,i=0;
    bool titu=true;
    while(temp<k)
    {temp+=v[i];i++;if(i==12 and temp<k){titu=false;break;}}
    if(titu==false)
    {cout<<-1;}
    else
    {cout<<i;}
}