#include<iostream>
using namespace std;
int main()
{
    int a,j=0,b=0;
    cin>>a;
    int arr[a];
    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            j++;
        }
        else
        {
            b++;
        }
    }
    if(j>b)
    {
        for(int i=0; i<a; i++)
        {
            if(arr[i]%2!=0)
            {
                cout<<i+1;
                break;
            }
        }
    }
    else
            {
        for(int i=0; i<a; i++)
        {
            if(arr[i]%2==0)
            {
                cout<<i+1;
                break;
            }
        }
    }
    return 0;
}