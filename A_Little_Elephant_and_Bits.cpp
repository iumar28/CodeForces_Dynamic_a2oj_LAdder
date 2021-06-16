#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int pos=-1;
    for(int i=0;i<str.size();i++)
    {if(str[i]=='0')
    {pos=i;break;}
    }
    // cout<<pos;
    if(pos==-1)
    {str.pop_back();
    cout<<str;}
    else{
        for(int i=0;i<str.size();i++){
            if(i==pos)
            {continue;}
            else
            {cout<<str[i];}
        }
    }
}