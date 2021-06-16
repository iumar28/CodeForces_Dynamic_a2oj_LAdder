#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    
        int n,count=0;
        cin>>n;
        int a[n];
        cin>>a[0];
        int min=a[0],max=a[0];
        for(int i=1;i<n;i++){
            cin>>a[i];
            if(a[i]>max)
            {max=a[i],++count;}
            if(a[i]<min)
            {min=a[i],++count;}
        }
        cout<<count<<endl;
}