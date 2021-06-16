#include<bits/stdc++.h>
using namespace std;
int Substr(string s2, string s1)
{
    int counter = 0; // pointing s2
    int i = 0;
    for(;i<s1.length();i++)
    {
        if(counter==s2.length())
            break;
        if(s2[counter]==s1[i])
        {
            counter++;
        }
      else
        {
            // Special case where character preceding the i'th character is duplicate
            if(counter > 0)
            {
                i -= counter;
            }
            counter = 0;
        }
    }
    return counter < s2.length()?-1:i-counter;
}

int maximumRemovals(string s, string p, vector<int>& removable) {
    int count=0;
    for(auto x:removable){
        cout<<s<<endl;
        s[x]='@';
        if(Substr(s,p))
        {count++;}
    }
  
    return count;
        
    }

 
int main(){
    string s = "abcacb", p = "ab";
    vector<int> removable={3,1,0};
    cout<<maximumRemovals(s,p,removable);
}




//  for(auto x:mp){
//         cout<<x.first<<" "<<x.second<<endl;}
//         cout<<"------------\n";
//     for(auto x:ms)
//     {cout<<x.first<<" "<<x.second<<endl;}