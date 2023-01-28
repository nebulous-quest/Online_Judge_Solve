#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, y, n, r;
    cin >> t;
    while (t--)
    {
        int c = 0;
        cin >> x >> y >> n >> r;
        if (n * x > r)
        {
            cout << -1 << endl;
        }
        else
        {
            while (n>=0)
            {
                if ((n * y) + (c * x) <= r)
                {
                    cout << c << " " << n << endl;
                    break;
                }
                c++;
                n--;
            }
        }
    }
    return 0;
}