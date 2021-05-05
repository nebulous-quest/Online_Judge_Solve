#include<stdio.h>
int main()
{
    int ar[]= {2,4,5,1,3},i,j,l,temp=0;
    l=sizeof(ar)/sizeof(ar[0]);
    for(i=1; i<l; i++)
    {
        temp=ar[i];
        j=i-1;
        while(j>=0 && ar[j]>temp)
        {
            ar[j+1]=ar[j];
            j=j-1;
        }
        ar[j+1]=temp;
    }
    for(i=0; i<l; i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}
