#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t, n, x, y;
    cin >> t;
    while (t--)
    {
        cin >> n >> x >> y;
        int temp = y / 3;
        int need = n - temp;
        int x1 = x - temp;
        if (n > x)
        {
            cout << "NO" << endl;
        }
        else if (x == n && y < n * 3)
        {
            cout << "NO" << endl;
        }
        else if (x1 < (2 * need))
        {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}