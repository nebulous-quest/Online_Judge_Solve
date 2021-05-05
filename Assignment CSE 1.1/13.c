#include<stdio.h>
#define N 5
int main()
{
    int a[N],i,sum=0;
    printf("Enter elements  \n");
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
         for(i=0;i<N;i++)
         {
             sum=sum+a[i];
         }
         printf("Sum = %d",sum);
         return 0;
}
