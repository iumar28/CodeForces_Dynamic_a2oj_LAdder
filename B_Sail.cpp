#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,sx,sy,ex,ey,time=-1;
    string s;
    cin>>t>>sx>>sy>>ex>>ey;
    cin>>s;
    int min_distance=abs(sx-ex)+abs(sy-ey);
    for(int i=0;i<t;i++){
        if(s[i]=='E')
        {if(sx<ex)
        sx=sx+1;
        }
        else if(s[i]=='W')
        {if(sx>ex)
           sx=sx-1;
        }
        else if(s[i]=='N')
        {if(sy<ey)
            sy+=1;
            
        }
        else if(s[i]=='S')
        {
            if(sy>ey)
            sy-=1;
        }
        if(sx==ex and sy==ey)
        {time=i+1;break;}

    }
    cout<<time;
}