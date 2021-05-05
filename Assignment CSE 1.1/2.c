#include<stdio.h>
int prime_factor(int n)
{
    printf("The prime factors of %d are : ",n);
    int i=2;
    while(n!=1)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                printf("%d ",i);
                n=n/i;
            }
        }
        i++;
    }
}
int main()
{
    int n;
    printf("Enter an integer : ");
    scanf("%d",&n);
    prime_factor(n);
    return 0;
}
