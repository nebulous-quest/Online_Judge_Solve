#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,n;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>n;
        if(a%b==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            while(n)
            {
                if((n%a==0)&&(n%b!=0))
                {
                    cout<<n<<endl;
                    break;
                }
                n++;
            }
        }
    }
    return 0;
}