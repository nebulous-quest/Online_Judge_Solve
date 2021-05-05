#include<stdio.h>
int main()
{
    int A[5],max,min,i;
    printf("Enter 5 numbers :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&A[i]);
    }
    max=A[0];
    for(i=1;i<5;i++)
    {
        if(max<A[i])
            max=A[i];
    }
    printf("Maximum value is = %d\n",max);
        min=A[0];
    for(i=1;i<5;i++)
    {
        if(min>A[i])
            min=A[i];
    }
    printf("Minimum value is = %d",min);
    return 0;
}
