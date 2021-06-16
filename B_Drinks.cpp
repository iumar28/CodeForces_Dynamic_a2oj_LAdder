#include<bits/stdc++.h>
using namespace std;
#define int int long long

int32_t main(){
    int n;
    cin>>n;
    float sum=0;
    for(int i=0;i<n;i++)
    {int data;
    cin>>data;
    sum+=data;}
    n*=100;
    cout<<(sum/n)*100;
    
    return 0;
}