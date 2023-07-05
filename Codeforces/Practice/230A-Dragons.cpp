#include <bits/stdc++.h>
using namespace std;
int main()
{
    long s, n, x, y;
    cin >> s >> n;
    multimap<long, long> m;
    for (long i = 0; i < n; i++)
    {
        cin >> x >> y;
        m.insert({x, y});
    }
    for (auto i = m.begin(); i != m.end(); ++i)
    {
        if ((*i).first >= s)
        {
            cout << "NO" << endl;
            return 0;
        }
        else
        {
            s += (*i).second;
        }
    }
    cout << "YES" << endl;

    return 0;
}