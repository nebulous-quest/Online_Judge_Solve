#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<" "<<n<<endl;
        }
        else if(n==1)
        {
            cout<<n<<" "<<n<<endl;
        }
        else
        {
            cout<<(n/2)+1<<" "<<n<<endl;
        }
    }
    
    return 0;
}