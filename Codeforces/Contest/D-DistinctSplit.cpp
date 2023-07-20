#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        string a;
        cin >> a;
        set<char> s;
        int fa[n],fb[n];
        for (int i = 0; i < n; i++)
        {
            s.insert(a[i]);
            fa[i]=s.size();
        }
        s.clear();
        for (int i = n-1; i > -1; i--)
        {
            s.insert(a[i]);
            fb[i]=s.size();
        }
        int res=0;
        for (int i = 0; i < n-1; i++)
        {
            res=max(res,fa[i]+fb[i+1]);
        }
        
        cout<< res << endl;
    }
    return 0;
}