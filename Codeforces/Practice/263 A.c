#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5][5],j,i,col,row,r;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

     for(i=0;i<5;i++)
     {
         for(j=0;j<5;j++)
         {
             if(a[i][j]>0)
             {
                 row=i;
                 col=j;
                 break;
             }
         }
     }

     r=abs(2-row) + abs(2-col);

     printf("%d\n",r);

     return 0;
}
