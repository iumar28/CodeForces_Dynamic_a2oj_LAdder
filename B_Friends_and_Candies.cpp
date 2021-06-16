#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k=0,sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        bool ans=true;
        int mean=sum/n;
        if(sum%n!=0)
        {ans=false;}
        else
        {
        for(int i=0;i<n;i++)
        {if(a[i]>mean)
            k++;
        }
        }
        if(ans)
        {cout<<k<<endl;}
        else
        {cout<<-1<<endl;}
      
        
    }


        

}