#include<bits/stdc++.h>
// #include <boost/algorithm/string.hpp>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size(),small=0,capital=0;
    for(int i=0;i<n;i++)
    {
        if(isupper(s[i]))
        {capital++;}
        if(islower(s[i]))
        {small++;}
    }
    if(capital>small)
    {transform(s.begin(), s.end(), s.begin(), ::toupper);}
    else if(capital<small or capital==small)
    {transform(s.begin(), s.end(), s.begin(), ::tolower);}
    cout<<s<<endl;

    return 0;
}