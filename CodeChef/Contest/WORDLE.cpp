#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s, t1, m;
    while (t--)
    {
        cin >> s >> t1;
        for (int i = 0; i < 5; i++)
        {
            if (s[i] == t1[i])
            {
                m[i] = 'G';
            }
            else
            {
                m[i] = 'B';
            }
        }
        for (int i = 0; i < 5; i++)
        {
            cout<<m[i];
        }
        cout<<endl;
    }
    return 0;
}