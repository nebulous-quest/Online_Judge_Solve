#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x;
    cin >> t;
    while (t--)
    {
        long q;
        cin >> q;
        long s[q];
        vector<long> v;
        bool temp = false;
        for (long i = 0; i < q; i++)
        {
            cin >> x;
            if (v.empty())
            {
                v.push_back(x);
                s[i] = 1;
            }
            else
            {
                if (temp)
                {
                    if (v.back() > x)
                    {
                        s[i] = 0;
                    }
                    else
                    {
                        if (x > v[0])
                        {
                            s[i] = 0;
                        }
                        else
                        {
                            s[i] = 1;
                            v.push_back(x);
                        }
                    }
                }
                else
                {
                    if (x >= v.back())
                    {
                        s[i] = 1;
                        v.push_back(x);
                    }
                    else
                    {
                        if (x > v[0])
                            s[i] = 0;
                        else
                        {
                            temp = true;
                            s[i] = 1;
                            v.push_back(x);
                        }
                    }
                }
            }
        }
        for (auto j : s)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}