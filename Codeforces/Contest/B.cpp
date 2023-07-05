#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long int n, k;
        cin >> n >> k;
        long int a[n], b[n], s[n];
        for (long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (long int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (long int i = 0; i < n; i++)
        {
            if (abs(a[i] - b[i]) <= k)
            {
                s[i] = b[i];
            }
            else
            {
                for (long int j = i + 1; j < n; j++)
                {
                    if (abs(a[i] - b[j]) <= k)
                    {
                        s[i] = b[j];
                        swap(b[i], b[j]);
                        break;
                    }
                }
            }
        }
        for (long int i = 0; i < n; i++)
        {
            cout << s[i] << " ";
        }
        cout << endl;
    }
    return 0;
}