#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,zero=0,five=0;
    cin>>n;
    int data;
    for(int i=0;i<n;i++){
        cin>>data;
        if(data==0)
        {zero++;}
        if(data==5)
        {five++;}
    }
    if(zero==0)
    {cout<<-1;}
    else if(five<9)
    {cout<<0;}
    else{
        five-=five%9;
        for(int i=0;i<five;i++)
        {cout<<5;}
        for(int i=0;i<zero;i++)
        {cout<<0;}
    }
    return 0;
}