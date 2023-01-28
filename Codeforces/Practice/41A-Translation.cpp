#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    reverse(s.begin(),s.end());
    if(s.compare(t)==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}