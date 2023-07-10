#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    char c[10];
    char v[11]={"codeforces"};
    while (n--)
    {
        int temp=0;
        for (int i = 0; i < 10; i++)
        {
            cin>>c[i];
            if(c[i] != v[i]){
                temp++;
            }
        }
        
       cout<<temp<<endl;

    }
    return 0;
}