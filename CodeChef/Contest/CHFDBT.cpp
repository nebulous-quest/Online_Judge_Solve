#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        
        if(n%2==0)
        {
            cout<<n/2<<endl;
        }
        else{
            cout<<(n/2)+1<<endl;
        }
    }
    return 0;
}