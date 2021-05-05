#include<stdio.h>
int main()
{
    int arr[50],temp[50],i,j,n,count;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        temp[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                temp[j]=0;
            }
        }
         if(temp[i] != 0)
        {
            temp[i] = count;
        }
    }
      printf("\nFrequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(temp[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], temp[i]);
        }
    }
    return 0;
}
