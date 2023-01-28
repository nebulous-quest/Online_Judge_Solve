#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        int l=max(a,b);
        cout<<max(l,c)<<endl;
    }
    return 0;
}