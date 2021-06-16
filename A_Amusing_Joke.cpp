#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
   string temp=s1+s2;
   sort(s3.begin(),s3.end());
   sort(temp.begin(),temp.end());
   if(temp==s3){
       cout<<"YES";
   }
   else
   {cout<<"NO";}
   return 0;
}