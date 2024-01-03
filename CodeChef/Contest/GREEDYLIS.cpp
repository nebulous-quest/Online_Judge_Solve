#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        if (x == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
            continue;
        }

        if  (n - x <= 1)
        {
            cout << "-1" << endl;
            continue;
        }

        int an = n - 1 - x;
        x = n + 1 - an;

        cout << x << " ";

        int xn = 1;

        for (int ann = 1; ann < n; ann++)
        {
            if (ann == x)
            {
                xn++;
            }
            cout << xn << " ";
            xn++;
        }

        cout << endl;
    }

    return 0;
}
