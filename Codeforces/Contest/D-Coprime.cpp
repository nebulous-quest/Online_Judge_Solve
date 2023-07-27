#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> cop[1001];
    for (int i = 1; i <= 1000; ++i)
    {
        for (int j = 1; j <= 1000; ++j)
        {
            if (__gcd(i, j) == 1)
            {
                cop[i].push_back(j);
            }
        }
    }
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n = 1;
        cin >> n;
        vector<int> v[1001];
        int res = -1;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v[x].push_back(i);
        }
        for (int i = 1; i <= 1000; i++)
        {

            for (auto j : cop[i])
            {
                if (!v[i].empty() && !v[j].empty())
                {
                    res = max(res, v[i].back() + v[j].back());
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}