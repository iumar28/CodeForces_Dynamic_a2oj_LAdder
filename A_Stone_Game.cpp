#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int a[n],mini=INT_MAX,maxi=INT_MIN,indexi,indexj;
    for(int i=1;i<=n;i++)
    {cin>>a[i];
    if(a[i]<mini)
    {mini=a[i],indexi=i;}
    if(a[i]>maxi)
    {maxi=a[i],indexj=i;}
    }

    int rightmini=n-indexi+1;
    int rightmaxi=n-indexj+1;


    int maxa=max(rightmini,rightmaxi);
    int maxb=max(indexi,indexj);
    int maxc=min(indexi+rightmaxi,indexj+rightmini);
    cout<<min(maxa,min(maxb,maxc))<<endl;
    // cout<<min(indexi+rj,indexj+ri)<<endl;

    
  
    }
}










//   int ans;
//     int mid=n/2;
//     if(indexi<=mid and indexj<=mid)
//     {ans=max(indexi,indexj);}
//     else if(indexi>mid and indexj>mid)
//     {ans=n-min(indexi,indexj)+1;}

//     else if(indexi<=mid and indexj>mid)
//     {
//         ans=indexi+(n-indexj+1);
//     }
    
//     else if(indexi>mid and indexj<=mid)
//     {ans=indexj+(n-indexi+1);}    
//     cout<<ans<<endl;