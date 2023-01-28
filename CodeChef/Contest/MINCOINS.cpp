#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if (x == 1 || x == 2 || x == 3 || x == 4 || x == 6 || x == 7 || x == 8 || x == 9)
        {
            cout << 0 - 1 << endl;
        }
        else if (x % 10 == 0)
        {
            cout << x / 10 << endl;
        }
        else if (x % 10 != 0)
        {
            int s, p, q, r;
            q = x % 10;
            if (x % 5 == 0)
            {
                s = x / 5;
            }
            else if (x % 5 != 0)
            {
                cout << 0 - 1 << endl;
            }
            if (q % 5 == 0)
            {
                p = x / 10;
                r = q / 5;
                cout << min(p + r, s) << endl;
            }
        }
    }
    return 0;
}