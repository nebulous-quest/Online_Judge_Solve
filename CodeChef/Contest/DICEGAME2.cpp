#include <bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin >> t;
    vector<int> v;
    vector<int> v2;
    int x;
    while (t--)
    {
        for (int i = 0; i < 6; i++)
        {
            if (i < 3)
            {
                cin >> x;
                v.push_back(x);
            }
            else
            {
                cin >> x;
                v2.push_back(x);
            }
        }
        sort(v.begin(), v.end());
        sort(v2.begin(), v2.end());
        int s1 = 0, s2 = 0;
        s1 = v[1] + v[2];
        s2 = v2[1] + v2[2];
        if (s1 > s2)
        {
            cout << "Alice" << endl;
        }
        else if (s2 > s1)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
        v.clear();
        v2.clear();
    }
    return 0;
}