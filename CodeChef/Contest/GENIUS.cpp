#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n, x;
    cin >> t;
    while (t--)
    {
        long long int a = 0, b = 0, c = 0;
        cin >> n>> x;
        if (x % 3 == 0)
        {
            a =a+ x / 3;
        }
        else if (x % 3 == 1)
        {
            a = a+(x / 3) + 1;
            b += 2;
        }
        else if (x % 3 == 2)
        {
            a = a+(x / 3) + 1;
            b += 1;
        }
        c = n - a - b;
        if (a + b <= n)
        {
            cout << "YES" << endl;
            cout << a <<" "<< b  <<" "<< c << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}