#include <Stdio.h>
void even(int even[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(even[i]%2==0)
        {
            printf("%d ",even[i]);
        }
    }
}
void odd(int odd[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(odd[i]%2!=0)
        {
            printf("%d ",odd[i]);
        }
    }
}
int main ()
{
    int first[10],n,i;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&first[i]);
    }
    printf("\nPrinting even number array : ");
    even(first,n);
    printf("\nPrinting odd number array : ");
    odd(first,n);
    return 0;
}

