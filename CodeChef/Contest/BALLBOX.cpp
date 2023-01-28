#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long int n, k, temp = 0;
        cin >> n >> k;
        temp = k * (k + 1) / 2;
        if (temp <= n)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}