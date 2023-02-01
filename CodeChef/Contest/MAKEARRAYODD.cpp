#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    long int n,x,e;
    while(t--)
    {
        e=0;
        cin>>n>>x;
        long int a[n];
        for (long int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                e++;
        }
        if(x%2)
        {
            if(e%2)
                cout<<e/2+1<<endl;
            else
                cout<<e/2<<endl;
        }
        else{
            if(e!=n)
                cout<<e<<endl;
            else
                cout<<-1<<endl;
        }
    }
    return 0;
}