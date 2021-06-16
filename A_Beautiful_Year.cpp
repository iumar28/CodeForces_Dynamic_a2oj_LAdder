#include<bits/stdc++.h>
using namespace std;

bool isdistinct(int y){
    set<int> set;
    while(y>0){
        set.insert(y%10);
        y/=10;
    }
    if(set.size()==4)
    {return true;}
    return false;

}

int main()
{
   int y;
   cin>>y;
   int ans=-1;
   for(int i=1;i<=8000;i++){
       if(isdistinct(y+i))
       {ans=y+i;break;}
   }
   cout<<ans;
   
}