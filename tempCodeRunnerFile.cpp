#include<bits/stdc++.h>
using namespace std;

int main()
{
   int y;
   cin>>y;
   int temp=y;
   set<int> uniq;
  while(temp>0){
      uniq.insert(temp%10);
      temp/=10;
  }
   for(auto x:uniq)
   {cout<<x<<" ";}
   return 0;
}