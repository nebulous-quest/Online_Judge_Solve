#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin >> n;
    vector<int> divs;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divs.push_back(i);
            if (i != n / i)
                divs.push_back(n / i);
        }
    }
    sort(divs.begin(), divs.end());
    for (auto x : divs)
    {
        if (x != divs.size() - 1)
            cout << x << " ";
        else
            cout << x;
    }

    cout << endl;
    return 0;
}