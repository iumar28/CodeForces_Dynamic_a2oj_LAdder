#include<bits/stdc++.h>
using namespace std;
#define int long long

int printDivisors(int n)
{int count=0;
 
    for (int i=1; i<=sqrt(n); i++)
    {
        
        if (n%i == 0)
        {
           
            if (n/i == i)
                count++;
 
            else
                count+=2;
        }
    }
    return count;
}

int32_t main(){
    int a,b,c,sum=0;
    cin>>a>>b>>c;
    unordered_map<int,int> mp;
    mp[1]=1,mp[2]=2,mp[4]=3;mp[8]=4;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                int res=i*j*k;
                if(mp[res]!=0)
                {sum+=mp[res];}
                else
                {  int lulu=printDivisors(res);
                   sum+=lulu;
                   sum%=1073741824;
                mp[res]=lulu;}
            }
        }
    }
    cout<<sum%1073741824;
}