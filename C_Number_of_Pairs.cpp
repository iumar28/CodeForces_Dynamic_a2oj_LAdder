#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        int a[n];     
        for(int i=0;i<n;i++)
        {cin>>a[i];}
        sort(a,a+n);
        int start=0,end=n-1,count=0;
        while(start<end){
            if(a[start]+a[end]>=l && a[start]+a[end]<=r)
            {count++; start++,end--;}
            else if(a[start]+a[end]<l)
            {start++;}
            else if(a[start]+a[end]>r)
            {end--;}
           
        }
        cout<<count<<endl;
      
    }      

}