#include <stdio.h>
int main ()
{
    int i,j,n1,n2,count=0;
    printf("Enter the size of the first array ");
    scanf("%d",&n1);
    int first_arr[n1];

    printf("Enter the elements of the first array ");
    for(i=0; i<n1; i++)
        scanf("%d",&first_arr[i]);

    printf("Enter the size of the second array ");
    scanf("%d",&n2);
    int second_arr[n2];
    int third_arr[n1+n2];
    int temp[n1+n2];

    printf("Enter the elements of the second array ");
    for(i=0; i<n2; i++)
        scanf("%d",&second_arr[i]);

    for(i=0; i<n1; i++)
        third_arr[i]=first_arr[i];

    for(i=0; i<n1+n2; i++)
        third_arr[n1+i]=second_arr[i];

    for (i=0; i<n1+n2; i++)
        temp[i]=1;

    for (i=0; i<n1+n2; i++)
    {
        for(j=i+1; j<n1+n2; j++)
        {
            if(third_arr[i]==third_arr[j])
            {
                temp[j]=0;
            }
        }
    }
    for(i=0; i<n1+n2; i++)
    {
        if(temp[i]!=0)
            printf("%d\t",third_arr[i]);
    }
    return 0;
}
