#include <stdio.h>
int strong();
int minStrong(int);
int maxStrong(int);
int main ()
 {
     int n,max,min;
     printf("Enter an integer number : ");
     scanf("%d",&n);
    if (strong(n)==n)
        printf("%d is a strong number",n);
    else
    {
        int minstrong=minStrong(n);
        int maxstrong=maxStrong(n);
        if ((n-minstrong)>(maxstrong-n))
            printf("The closest Strong number is %d",maxstrong);
        else
            printf("The closest Strong number is %d",minstrong);
    }
 }
int strong(int n)
 {
     int temp, sum=0,rem;
   temp=n;
   for( ; temp!=0;)
   {
       rem=temp%10;
       int i,fact=1;
       for(i=1;i<=rem;i++)
       {
           fact=fact*i;
       }
       sum+=fact;
       temp=temp/10;
   }
   if(sum==n)
    return n;
    else
   return 0;

 }
int minStrong(int n)

{
    for( ;n>=1 ;n--)
     {
         if(strong(n)==n)
         {
            return n;
            break;
         }
     }
}
int maxStrong(int n)
{
    for(  ;n>=1 ;n++)
     {
      if(strong(n)==n)
         {
            return n;
            break;
         }
     }
}

