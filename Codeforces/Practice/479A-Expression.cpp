#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int p, w, x, y, z;
    w = a + (b * c);
    x = a * (b + c);
    y = a * b * c;
    z = (a + b) * c;
    p = a + b + c;
    int i = max(w, x);
    int j = max(y, z);
    int k = max(j, p);

    cout << max(i, k) << endl;
    return 0;
}