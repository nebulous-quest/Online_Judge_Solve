#include<stdio.h>
int main()
{
    int A[5],copyA[5],i;
    printf("Enter 5 numbers for First Array A :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<5;i++)
    {
        copyA[i] = A[i];
    }
    printf("Copying elements from array A to copyA : ");
    for(i=0;i<5;i++)
    {
        printf("%d ",copyA[i]);
    }
    return 0;
}
