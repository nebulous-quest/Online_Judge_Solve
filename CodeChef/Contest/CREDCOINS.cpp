#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        int s=x*y;
        if(s/100>=1)
        {
            cout<<s/100<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}