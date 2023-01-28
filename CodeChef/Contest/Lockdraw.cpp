#include<iostream>
using namespace std;

int main()
{
    int t;
    long int a,b,c;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>c;
        if((a==b+c)||(a+b==c)||(a+c==b))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}