#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m, k, h, count = 0;
        cin >> n >> m >> k >> h;
        // vector<int> v;
        int diff = (m - 1) * k;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            int temp = abs(h - x);
            if ((temp <= diff) && (temp % k == 0) && temp != 0)
            {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}