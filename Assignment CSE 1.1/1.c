#include<stdio.h>
int for_gcd(int n1,int n2,int n3)
{
    int i,min,gcd;
    min = (n1<n2 && n1<n3) ? n1 : (n2<n3) ? n2 : n3;
    for(i=min; i>=1; i--)
    {
        if(n1%i==0 && n2%i==0 && n3%i==0)
        {
            gcd = i;
            break ;
        }
    }
    return gcd;
}
int for_lcm(int n1,int n2,int n3)
{
    int i,max,lcm;
    max= (n1>n2 && n1>n3) ? n1 : (n2>n3) ? n2 : n3;
    for(i=max;  ; i++)
    {
        if (i%n1==0 && i%n2==0 && i%n3==0 )
        {
            lcm=i;
            break;
        }
    }
    return lcm;
}
int main()
{
    int n1,n2,n3;
    printf ("Enter three integer number : ");
    scanf("%d%d%d",&n1,&n2,&n3);
    printf("GCD is = %d",for_gcd(n1,n2,n3));
    printf("\nLCM is = %d",for_lcm(n1,n2,n3));
}
