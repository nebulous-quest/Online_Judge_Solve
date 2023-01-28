#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, c = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        int j = n - 1;
        while (j<=0)
        {
            for (int i = 0; i < j; i++)
            {
                if (s.at(i) != s.at(j))
                {
                    c++;
                }
            }
            j--;
        }
        if (c = k)
        {
            if (n % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else if ((k - c) % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}