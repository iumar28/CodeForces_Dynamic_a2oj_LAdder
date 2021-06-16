#include<bits/stdc++.h>
using namespace std;

bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
    bool ans=false;
    int ans1=0,ans2=0,ans3=0;
    for(auto x:triplets){
        if(x[0]==target[0])
        {ans1=x[0];}
        if(x[1]==target[1])
        {ans2=x[1];}
        if(x[2]==target[2])
        {ans3=x[2];}
        if(ans1 and ans2 and ans3)
        {break;}
    }
    if(ans1==target[0] && ans2==target[1] && ans3==target[2])
    {ans=true;}
    return ans;

    }

int main(){
    vector<vector<int>> triplets={{2,5,3},{1,8,4},{1,7,5}};
    vector<int> target={2,7,5};
    cout<<mergeTriplets(triplets,target);
}