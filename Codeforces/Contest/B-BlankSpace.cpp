#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp = 0, x = 0;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                temp++;
            }
            else
            {
                temp = 0;
            }
            x = max(x, temp);
        }
        cout << x << endl;
    }
    return 0;
}