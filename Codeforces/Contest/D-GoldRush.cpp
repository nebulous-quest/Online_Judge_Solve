#include <bits/stdc++.h>
using namespace std;
bool find(int n, int m)
{
    if (n == m)
    {
        return true;
    }
    else if (n % 3 != 0)
    {
        return false;
    }
    else
    {
        return (find(n / 3, m) || find(2 * n / 3, m));
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        bool temp = find(n, m);
        if (temp == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}