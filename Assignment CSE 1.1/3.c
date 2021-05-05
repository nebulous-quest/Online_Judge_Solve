#include<stdio.h>
int fibo(int n)
{
    if(n==1 || n==0)
        return n;
    else
        return (fibo(n-1)+fibo(n-2));
}
int main()
{
    int i,result,n;
    printf("Enter the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       result=fibo(i);
       printf("%d\t",result);
    }
    return 0;
}
