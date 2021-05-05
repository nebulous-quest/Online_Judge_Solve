#include<stdio.h>
int main()
{
    long long int n,k,i,a;
    scanf("%lld %lld",&n,&k);
    for(i=1;i<=k;i++)
    {
       a=n%10;
       if(a==0){
        n=n/10;
       }
       else{
        n=n-1;
       }
    }
    printf("%lld\n",n);
    return 0;
}
