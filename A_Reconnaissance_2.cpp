#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {cin>>a[i];}
    int tampu=n+1;
    int mini=abs(a[0]-a[1]),tt,uu;
    for(int i=0;i<n;i++)
    {
        if(abs(a[i]-a[(i+1)%tampu])<mini)
        {mini=abs(a[i%n]-a[(i+1)%n]);
        tt=i,uu=(i+1)%tampu;
        }
    }
    cout<<tt<<" "<<uu;
    return 0;
}