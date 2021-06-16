#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int count=1;
    char prev=str[0];
    for(int i=1;i<str.size();i++)
    {
        if(count==7)
        {break;}
        if(str[i]==prev)
        {++count;}
        else
        {count=1;prev=str[i];}

    }
    if(count>=7)
    {cout<<"YES";}
    else
    {cout<<"NO";}
}