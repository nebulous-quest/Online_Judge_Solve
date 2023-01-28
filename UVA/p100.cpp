#include <bits/stdc++.h>
using namespace std;

int cycle(int x)
{
    int c = 0;
    while (1)
    {
        c++;
        if (x == 1)
            break;
        else if (x % 2 != 0)
            x = (3 * x) + 1;
        else
            x=x/2;
    }
    return c;
}

int main()
{
    int a, b, r;
    while (cin >> a >> b)
    {
        int max = 0;
        cout << a << " " << b << " ";
        if (a > b)
            swap(a, b);
        for (int i = a; i <= b; i++)
        {
            r = cycle(i);
            if (r >= max)
                max = r;
        }
        cout << max << endl;
    }
    return 0;
}