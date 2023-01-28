#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        double num= pow((.143*n),n);
        cout<<round(num)<<endl;
    }
    return 0;
}