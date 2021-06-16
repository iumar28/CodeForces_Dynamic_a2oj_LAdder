#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int a=s1.size();
    int b=s2.size();
    bool ans=true;
    int differnce=0;
    vector<int> index;
    if(a!=b)
    {cout<<"NO";}
    else
    {
        for(int i=0;i<a;i++){
        if(s1[i]!=s2[i])
        {differnce++;index.emplace_back(i);}
        }

        if(differnce==2)
        {if(s1[index[0]]!=s2[index[1]] or s1[index[1]]!=s2[index[0]])
        ans=false;}
        else    
        {ans=false;}
        if(ans)
    {cout<<"YES";}
    else
    {cout<<"NO";}

    }
    

    
    return 0;
}