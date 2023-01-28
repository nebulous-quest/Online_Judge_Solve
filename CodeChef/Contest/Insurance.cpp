#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y;
    cin>>t;
    while (t--)
    {
        cin>>x>>y;
        if(x==y || y>x)
            cout<<x<<endl;
        else
            cout<<y<<endl;
    }
    return 0;
}