#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n,k;
    cin>>n>>k;
    
        if(k<=(n+1)/2)
        {cout<<(2*k)-1;}

        else
        {cout<<(k-(n+1)/2)*2;}


    return 0;
}






        // if(k>n/2)
        // {
        //     if(n%2==1)
        //     {cout<<2*(k-n/2-1);}
        //     else{cout<<2*(k-n/2);}
        // }
