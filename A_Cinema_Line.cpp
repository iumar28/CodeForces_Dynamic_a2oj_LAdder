#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,twenty_five=0,fifty=0,hundred=0,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==25)
        {twenty_five++;}
        else if(a[i]==50){
            if(twenty_five>=1)
            {twenty_five--,fifty++;}
            else
            {cout<<"NO";return 0;}
        }
        else if(a[i]==100){
            if(twenty_five>=1 and fifty>=1){
                twenty_five--,fifty--;
                hundred++;
            }
            else if(fifty==0 and twenty_five>=3){
                twenty_five-=3;
            }
            else
            {cout<<"NO";return 0;}
        }
       
    }
    cout<<"YES";
}