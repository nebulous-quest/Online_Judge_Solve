#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            cout << "NEW PHONE" << endl;
        }
        else if (y > x)
            cout << "REPAIR" << endl;
        else
            cout << "ANY" << endl;

        t--;
    }
    return 0;
}