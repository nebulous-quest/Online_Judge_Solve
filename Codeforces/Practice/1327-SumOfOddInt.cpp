#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    long int n, k;
    
    while (t)
    {
        int sum = 0, count = 0;
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {

            if (i % 2 != 0)
            {
                count++;
                if (count <= k)
                {
                    sum += i;
                }
                else
                {
                    break;
                }
            }
        }
        if (sum == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}