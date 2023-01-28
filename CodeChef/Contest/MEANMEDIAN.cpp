#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long int x,y;
        cin>>x>>y;
        cout<<min(3*x-2*y,y)<<" "<<y<<" "<<max(3*x-2*y,y)<<endl;
    }
    return 0;
}