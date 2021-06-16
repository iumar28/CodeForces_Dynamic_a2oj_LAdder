

#include<bits/stdc++.h>
using namespace std;

void subString(string str)
{
    int n=str.size();
    int count=0;
	
	for (int len = 1; len <= n; len++)
	{
		
		for (int i = 0; i <= n - len; i++)
		{
			
			int j = i + len - 1;		
			for (int k = i; k <= j; k++)
				cout <<++count<<"--"<< str[k]<<endl;
			
			cout << endl;
		}
	}
}


int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
    subString(str);
    }
	return 0;
}
