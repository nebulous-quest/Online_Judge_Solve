#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string a = "hello";
    int x = 0, count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == a[x])
        {
            x++;
            count++;
        }
    }
    if (count == a.length())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}