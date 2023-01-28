#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int c = 0, d = 0;
    string s;
    cin >> s;
    for (int i = 1; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            c++;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            d++;
        }
    }
    if (islower(s[0]) && c == 0)
    {
        s[0] = toupper(s[0]);
        for (int i = 1; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
        return 0;
    }
    if (d == s.size())
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }
    else
    {
        cout << s << endl;
    }
    return 0;
}