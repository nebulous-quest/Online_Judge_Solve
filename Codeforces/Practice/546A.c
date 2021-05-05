#include<stdio.h>
int main()
{
    long long int n,w,r,k,i,sum=0;
    scanf("%lld%lld%lld",&k,&n,&w);
    for(i=1; i<=w; i++)
    {
        sum=sum+i*k;
    }
    if(sum>n)
        r=sum-n;
    else
        r=0;
    printf("%lld\n",r);
    return 0;
}
