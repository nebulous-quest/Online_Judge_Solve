//Write a function to print reverse a series using pointers.
#include<stdio.h>
int main()
{
    int *p,n;
    printf("Enter the size of array n : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements of an array\n",n);
    for(p=a; p<=a+n-1; p++)
    {
        scanf("%d",p);
    }
    printf("Elements in reverse order \n");
    for(p=a+n-1; p>=a; p--)
    {
        printf("%d ",*p);
    }
}
