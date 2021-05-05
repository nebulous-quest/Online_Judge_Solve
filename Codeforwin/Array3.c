#include<stdio.h>
int main()
{
    int sum=0, i,arr[10],n;
    printf("Enter size");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
        sum=sum+arr[i];
    printf("Sum = %d",sum);
    return 0;
}
