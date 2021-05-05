#include<stdio.h>
int main()
{
    int A[5],sum=0,i;
    printf("Enter 5 numbers :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+A[i];
    }
    printf("The sum is = %d",sum);
    return 0;
}
