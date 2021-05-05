#include<stdio.h>
int perfect_print(int ll,int ul)
{
    printf("The perfect numbers in range is : ");
    int i;
    for(i=ll; i<ul; i++)
    {
        if(isPerfect(i))
        {
            printf("%d ",i);
        }
    }
}
int isPerfect(int n)
{
    int rem,i,sum=0;
    for (i=1; i<n; i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
        return 1;
    else
        return 0;
}
int main()
{
    int ll,ul;
    printf("Enter range: ");
    scanf("%d%d",&ll,&ul);
    perfect_print(ll,ul);
}
