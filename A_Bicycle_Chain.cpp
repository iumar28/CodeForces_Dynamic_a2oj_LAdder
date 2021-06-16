#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,count=1,max=INT_MIN;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int m;cin>>m;
    for(int i=0;i<m;i++){
        cin>>x;
        for(int j=0;j<n;j++){
           if(x%a[j]==0){
              int temp=x/a[j];
               if(temp>max)
               {max=temp,count=1;}
               else if(temp==max)
               {count++;}
               break;

           }
        }
    }
        cout<<count<<endl;
}