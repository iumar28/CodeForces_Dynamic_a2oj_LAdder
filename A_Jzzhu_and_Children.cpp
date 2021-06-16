#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    queue<pair<int,int>> q;
    for(int i=0;i<n;i++){
        cin>>a[i];
        q.push(make_pair(a[i],i));
    }
    int nt,pos;
    while(!q.empty()){
        
        auto front=q.front();
       
        int no_of_toffee=front.first;
        int position=front.second;
         if(q.size()==1)
        {nt=no_of_toffee;
        pos=position;break;}
        if(no_of_toffee>m)
        {q.push(make_pair(no_of_toffee-m,position));}
        q.pop();
    }
    cout<<pos+1;
}