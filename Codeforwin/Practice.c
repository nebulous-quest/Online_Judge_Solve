//Write a C program to find all prime numbers between given interval using functions.
#include<stdio.h>
int primePrint(int ll,int ul)
{
    printf("Prime number between the range is : ");
    while(ll<=ul)
    {
        if(isprime(ll)){
            printf("%d ",ll);
        }
        ll++;
    }
}
int isprime(int n)
{
   int i;
   for (i=2; i<n;i++)
   {
       if(n%i==0)
        return 0;
   }
   if(n==1)
    return 0;
   else
       return 1;
}
int main()
{
  int ll,ul;
  printf("Enter range: ");
  scanf("%d%d",&ll,&ul);
  primePrint(ll,ul);
}
