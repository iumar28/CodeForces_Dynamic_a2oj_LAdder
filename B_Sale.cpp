#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    sort(a,a+n);
    int ans=0;
    for(int i=0;i<m;i++)
    {if(a[i]<0)ans+=a[i];}
    cout<<-1*ans;
    return 0;
}