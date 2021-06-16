#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],mini=INT_MAX,maxi=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mini=min(mini,a[i]);
        maxi=max(maxi,a[i]);
    }
    int count=0;
    for(int i=0;i<n-1;i++){
        if(a[0]==maxi and a[n-1]==mini)
        {cout<<"ans\n";}        
        for(int j=0;j<n-i-1;j++){             
            if(a[j]<a[j+1])
            {swap(a[j],a[j+1]);count++;}          
        }
    }
   
    // cout<<maxi<<" "<<mini;
    // for(int i=0;i<n;i++){
    //    cout<<a[i]<<" ";}
    // cout<<count;

    return 0;
}