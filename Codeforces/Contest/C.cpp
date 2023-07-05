#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long long int n,e=0,o=0;
        cin>>n;
        long long int a[n];
        for (long long int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]%2)
                e++;
            else
                o++;
        }
        
    }
}