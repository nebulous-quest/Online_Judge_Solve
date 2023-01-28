#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    int a[100][100];
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin>>a[i][j];
        }
        if(a[i][1]-a[i][0]>=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}