#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout); 
 
    int n,m;
    string ans,tamp="BG";
    cin>>n>>m;
    if(n>m)
    {int count=n-m;
    while(count)
    {ans+="BG",count--;}
    count=n-m;
    while(count)
    {ans+='B',count--;}
    }
    else if(n<m){
        int count=m-n;
        while(count){
            ans+="BG",count--;
        }
        count=m-n;
        while(count)
        {ans+='G',count--;}
    }
    else if(n==m){
        int temp=n;
        while(temp){
            ans+="GB",temp--;
        }  
 }
 cout<<ans;
}

