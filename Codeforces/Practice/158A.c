#include<stdio.h>
int main()
{
    int n,k,i,arr[100],c=0;
    scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
     for(i=0;i<n;i++)
   {
      if(arr[i]>0 && arr[i]>=arr[k-1])
      {
          c++;
      }
   }
   printf("%d\n",c);
    return 0;
}
