#include <bits/stdc++.h>
using namespace std;

int main()
{
    double t, x, a;
    cin >> t >> x;
    a = 50 * (3 * sqrt(3) * t * t) / 2;
    if (a >= x)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}