#include<stdio.h>
int main()
{
    int a[20],b[20], *p,*p1,n,i;
    printf("Enter array size n : ");
    scanf("%d",&n);
    p=a;
    p1=b;
    printf("Taking elements for 1st array\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",(p+i));
    }
    printf("Printing 1st array\n");
     for(i=0; i<n; i++)
    {
        printf("%d ",*(p+i));
    }
    for(i=0; i<n; i++)
    {
        *(p1+i)=*(p+i);
    }
    printf("\nPrinting copy array\n");
     for(i=0; i<n; i++)
    {
        printf("%d ",*(p1+i));
    }
}
