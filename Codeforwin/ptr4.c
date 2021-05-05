//swap number to use pointer
#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    printf("Enter 2 numbers ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("Af swap a = %d",a);
    printf("\nAf swap b = %d",b);
}

