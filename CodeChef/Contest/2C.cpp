#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int s=(n*(n+1))/2;
    cout<<s-sum<<endl;
    return 0;
}