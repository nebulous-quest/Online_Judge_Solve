#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    int x,y,z;
    while(t--)
    {
        cin>>x>>y>>z;
        int r=min(min(x,y),z);
        if(r==x)
            cout<<"ALICE"<<endl;
        else if(r==y)
            cout<<"BOB"<<endl;
        else
            cout<<"CHARLIE"<<endl;
    }
    return 0;
}