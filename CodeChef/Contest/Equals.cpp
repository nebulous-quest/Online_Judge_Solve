#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t,*mx=0,*mn=0,n,i;
    int a[n];
    cin>>t;
    while(t>0)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        mn= std::min_element(a,a+n);
        mx= std::max_element(a,a+n);
        if(*mx != *mn)
            cout<<*mx-*mn<<endl;
        else
            cout<<0<<endl;
        t--;
    }
    return 0;
}
