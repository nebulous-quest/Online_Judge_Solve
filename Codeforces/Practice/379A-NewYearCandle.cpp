#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, sum = 0;
    cin >> a >> b;
    sum+=a;
    while (a>=b)
    {
        sum+=(a/b);
        a=(a/b)+(a%b);
    }
    cout << sum << endl;
    return 0;
}