#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    int n,x,y;
    while(t--)
    {
        cin>>n>>x>>y;
        if(x*y>=n)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}