#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int count = 1;
        for (int i = 0; i < n; i++)
        {
            if ((b[i] - a[i]) != x && (b[i] - a[i]) != y)
            {
                count = 0;
                break;
            }
        }
        if (count == 1)
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