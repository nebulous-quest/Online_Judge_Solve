#include<stdio.h>
int sum_digit(int n);
int main()
{
    int n;
    printf("Enter an integer number : ");
    scanf("%d",&n);
    printf("Sum of digit of the integer number is = %d",sum_digit(n));
    return 0;
}
int sum_digit(int n)
{
    static int sum=0;
    int r;
    if(n!=0)
    {
        r = n%10;
        sum = sum + r;
        n = sum_digit(n/10);
        return sum;
    }
    else
        return 0;
}
