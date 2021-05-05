#include <stdio.h>
int perfect(int);
int minPerfect(int);
int maxPerfect(int);
int main()
{
    int num;
    printf("Enter an integer value ");
    scanf("%d",&num);
    if (perfect(num)==num)
        printf("%d is a armstrong number",num);
    else
    {
        int minperfect=minPerfect(num);
        int maxperfect=maxPerfect(num);
        if((num-minperfect)>(maxperfect-num))
            printf("The closest armstrong number is %d",maxperfect);
        else
            printf("The closest armstrong number is %d",minperfect);
    }
}
int perfect (int x)
{
    int i,sum=0;
    for(i=1;i<x;i++)
    {
        if(x%i==0)
            sum+=i;
    }
    if(sum==x)
        return x;
    else
        return 0;
}
int maxPerfect(int num)
{
    while(num>=1)
     {
         if(perfect(num)==num)
         {
            return num;
            break;
         }
         num++;
     }
}
int minPerfect(int num)
{
    while(num>=1)
     {
         if(perfect(num)==num)
         {
            return num;
            break;
         }
         num--;
     }
}
