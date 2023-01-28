#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x;
    cin>>t;
    while (t--)
    {
        cin>>n>>x;
        if(n%3==0)
        {
            int s=(n/3)*2*x;
            cout<<s<<endl;
        }
        else{
            int s=(n/3)*2*x;
            int d=(n%3)*x;
            cout<<s+d<<endl;
        }
    }
    return 0;
}