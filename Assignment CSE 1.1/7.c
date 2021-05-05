#include<stdio.h>
int rev(int n);
int main()
{
    int n,res;
    printf("Enter an integer number : ");
    scanf("%d",&n);
    res=rev(n);
    printf("Reverse number of %d is : %d",n,res);
    return 0;
}
int rev(int n)
{
  static   int r,sum=0;
    if (n>0)
    {
        r =n%10;
        sum=(sum*10) + r;
        rev(n/10);
        return sum;
    }
    else
        return sum;
}
