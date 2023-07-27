#include <bits/stdc++.h>
#define x INT32_MAX
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> a(n);
        vector<int> b(n), s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        for (int i = 0; i < n; i++)
        {
            s[a[i].second] = b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << s[i] << " ";
        }
        cout << endl;
    }
    return 0;
}