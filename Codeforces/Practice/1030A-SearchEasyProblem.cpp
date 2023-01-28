#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    int a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            count++;
            break;
        }
    }
    if (count == 1)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }

    return 0;
}