#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    char c;
    while (t--)
    {
        long int n, o, z;
        cin >> n;
        char s[n];
        o = z = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> c;
            if (c == '1')
                o++;
            else
                z++;
            s[i] = c;
        }
        if (o == n)
            cout << 1 << endl;
        else if (o == n)
            cout << 0 << endl;
        else if (o == z)
            cout << z << endl;
        else if (o > z)
            cout << z+1 << endl;
        else
            cout << min(o, z) << endl;
    }
    return 0;
}