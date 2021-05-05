#include<stdio.h>
int sum_even(int n);
int main()
{
    int n;
    printf("Enter the last digit of the range : ");
    scanf("%d",&n);
    printf("The sum of even number is = %d",sum_even(n));
    return 0;
}
int sum_even(int n)
{
    static int sum=0;
    if(n!=0)
    {
        if(n%2==0){
            sum=sum+n;
            n=sum_even(n-2);
            return sum;
        }
        else if(n%2 != 0){
          sum_even(n-1);
        }
    }
    else
        return 0;
}
