//swap array
#include<stdio.h>
void swap(int *a[],int *b[])
{
    int temp[5];
    temp[5]=*a[5];
    *a[5]=*b[5];
   * b[5]= *temp[5];
}
int main()
{
    int a[20],b[20], *p,*p1,n;
   printf("Enter array size n : ");
    scanf("%d",&n);
    p=a;
    p1=b;
    printf("Taking elements for 1st array\n");
    for(p=a;p<a+n;p++)
    {
        scanf("%d",p);
    }
    printf("Printing 1st array\n");
     for(p=a;p<a+n;p++)
    {
        printf("%d ",*p);
    }
     printf("\nTaking elements for 2nd array\n");
     for(p1=b;p1<b+n;p1++)
    {
        scanf("%d",p1);
    }
    printf("Printing 2nd array\n");
     for(p1=b;p1<b+n;p1++)
    {
        printf("%d ",*p1);
    }
    swap(&a,&b);
    printf("\nAfter swaping 1st array\n");
     for(p=a;p<a+n;p++)
    {
        printf("%d ",*p);
    }
     printf("\nAfter swaping 2nd array\n");
      for(p1=b;p1<b+n;p1++)
    {
        printf("%d ",*p1);
    }
    return 0;
}
