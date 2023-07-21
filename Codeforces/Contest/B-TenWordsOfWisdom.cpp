#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        map<int, pair<int, int>> m;
        int n = 1, a, b;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a >> b;
            m[(-1 * b)] = {a, i};
        }

        for (auto it = m.begin(); it != m.end(); it++)
        {
            if ((*it).second.first <= 10)
            {
                cout << (*it).second.second << endl;
                break;
            }
        }
        m.clear();
    }
    return 0;
}