#include<stdio.h>
int main()
{
    int arr[]={2,4,5,1,3},i,j,l,temp=0;
    l=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<l;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
