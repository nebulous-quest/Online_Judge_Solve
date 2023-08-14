#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;cin>>t;
    while (t--)
    {
        int n=2;cin>>n;
        int odd=0,even=0;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            if(x%2==0)
            {
                even+=x;
            }
            else
            {
                odd+=x;
            }
        }
        if((even%2==0 && odd%2==0) || (even%2!=0 && odd%2!=0))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}