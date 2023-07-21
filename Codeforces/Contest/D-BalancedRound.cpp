#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        vector<long> s;
        for (long i = 0; i < n; i++)
        {
            long x;
            cin >> x;
            s.push_back(x);
        }
        sort(s.begin(), s.end());
        long ans = 0;
        for (long i = 0; i < s.size(); i++)
        {
            long j = i;
            for (j = i + 1; j < n; j++)
            {
                if (s[j] - s[j - 1] > k)
                {
                    break;
                }
            }
            ans = max(ans, j - i);
            i = j - 1;
        }
        cout << n - ans << endl;
    }
    return 0;
}