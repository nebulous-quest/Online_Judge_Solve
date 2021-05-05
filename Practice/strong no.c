#include<stdio.h>
int isStrong(int n)
{
   int temp, sum=0,rem;
   temp=n;
   while(temp!=0)
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
    return 1;
   else
    return 0;
}
int strong_print(int ll,int ul)
{
    printf("The strong  numbers between the range is : ");
    int i;
    for(i=ll; i<ul; i++)
    {
        if(isStrong(i))
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    int ll,ul;
    printf("Enter range: ");
    scanf("%d%d",&ll,&ul);
    strong_print(ll,ul);
}

