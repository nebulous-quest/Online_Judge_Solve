#include <iostream>
using namespace std;

int main()
{
    unsigned long long int n;

    cin >> n;
    unsigned long long int mid = n / 2, mid1 = (n + 1) / 2;

    if (n % 2 == 0)
    {
        cout << ((n + 1) * mid) << endl;
    }
    else if (n % 2 == 1)
    {
        cout << (mid1 * n) << endl;
    }

    return 0;
}