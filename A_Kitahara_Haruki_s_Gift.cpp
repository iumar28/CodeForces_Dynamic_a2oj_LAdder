#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    ll sum=0,x,hundred=0,two_hunderd=0;
    // int a[n];
    for(int i=0;i<n;i++)
    {cin>>x;sum+=x;
    x==100?hundred++:two_hunderd++;}

    if((sum/2)%100!=0 or (hundred%2==1 and two_hunderd==0) or (hundred==0 and two_hunderd%2==1))
    {cout<<"NO";}
    else
    {cout<<"YES";}

}