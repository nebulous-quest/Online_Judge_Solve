#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        char s[3];
        for (int i = 0; i < 3; i++)
        {
           cin>>s[i];
        }
        
        if((s[0]=='c' && s[1]!='b') || (s[1]=='c' &&s[2]!='b'))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}