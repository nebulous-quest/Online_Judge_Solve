#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.second > b.second;
}
int main()
{
    int n;
    cin >> n;
    map<string, int> m;
    while (n--)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    vector<pair<string,int>>v(m.begin(),m.end());
    sort(v.begin(), v.end(), cmp);
    cout<<v[0].first<<endl;
    return 0;
}