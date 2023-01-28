#include <bits/stdc++.h>
using namespace std;

int main()
{

    int r, c, cnt = 0;
    cin >> r >> c;
    vector<int> a;
    vector<int> b;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            char x;
            cin >> x;
            if (x == 'O')
            {
                a.push_back(j);
            }
            else if (x == '=')
            {
                b.push_back(j);
            }
        }
    }

    for (int i = 0; i < b.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
            if (a[i] == b[j])
            {
                cnt++;
            }
    }
    cout << cnt << endl;
}