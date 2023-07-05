#include <bits/stdc++.h>
using namespace std;
int main()
{
    long x, sum = 0;
    cin >> x;
    while (x != 0)
    {
        if (x % 2 == 1)
            sum++;
        x /= 2;
    }
    cout << sum << endl;
    return 0;
}