#include <Stdio.h>
int main ()
{
    int i,count=0,a[10],n,size;

    printf("Enter the size of array ");
    scanf("%d",&size);

    printf("Enter the elements of the array\n");
    for (i=0; i<size; i++)
        scanf("%d",&a[i]);

    printf("Enter the value which will be delete : ");
    scanf("%d",&n);

    for(i=0 ; i<size; i++)
    {
        if(a[i]==n)
        {
            for( ; i<size; i++)
            {
                a[i]=a[i+1];
            }
            count++;
        }
    }
    if(count!=0)
    {
        for (i=0; i<size-1; i++)
            printf("%d  ",a[i]);
    }
    else
        printf("Element not found");
    return 0;
}
