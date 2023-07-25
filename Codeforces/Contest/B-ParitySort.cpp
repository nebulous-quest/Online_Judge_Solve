#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), odd, even, last;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
            {
                even.push_back(v[i]);
            }
            else
            {
                odd.push_back(v[i]);
            }
        }
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        int e = 0, o = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                last.push_back(even[e]);
                ++e;
            }
            else
            {
                last.push_back(odd[o]);
                ++o;
            }
        }
        bool sorted = is_sorted(last.begin(), last.end());
        if (sorted)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
