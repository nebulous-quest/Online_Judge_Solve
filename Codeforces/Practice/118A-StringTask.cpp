#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s, s2;
    cin >> s;
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
        {
            continue;
        }
        else
        {
            s2 += '.';
            s2 += towlower(s[i]);
        }
    }
    cout<<s2<<endl;
    return 0;
}