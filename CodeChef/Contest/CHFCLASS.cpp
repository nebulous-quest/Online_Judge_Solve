#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int c=0;
        c+=(n/7);
        if(n%7==6)
        {
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}