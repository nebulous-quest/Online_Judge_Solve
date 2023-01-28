#include <bits/stdc++.h>
using namespace std;

long long int binomial_coefficient(long long int k, int a)
{
    long long int b = 1;
    for (int p = 1; p <= a; p++)
    {
        b = b * (k + 1 - p) / p;
    }
    return b;
}
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        cout << 1 << " ";
        for (int i = 1; i <= n; i++)
        {
            if (i != n)
                cout << binomial_coefficient(n, i) << " ";
            else
                cout << binomial_coefficient(n, i);
        }
        cout<<endl;
    }
    return 0;
}