#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cin >> k;
        set<int> s;
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        for (int i = 0; i < n; i++)
        {
            if (s.count(v[i]))
            {
                continue;
            }
            else
                cout << v[i] << " ";
        }

        cout << endl;
    }
    return 0;
}
