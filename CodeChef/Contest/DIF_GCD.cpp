#include <bits/stdc++.h>
#include<numeric>
using namespace std;
int main()
{
    int t,m,n;
    cin>>t;
    while (t--)
    {
        cin>>n>>m;
        if(abs(m-n)==1 ||abs(m-n)==0)
        {
            cout<<m<<" "<<m<<endl;
        }
        else{
            while (m!=n)
            {
                if(__gcd(m,n)>=n)
                {
                    cout<<n<<" "<<m<<endl;
                    break;
                }
                n++;
                m--;
            }
            
        }
    }
    return 0;
}