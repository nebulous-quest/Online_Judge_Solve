#include<stdio.h>
int main()
{
    int t,am,bm,cm,a,b,c,tm;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d%d%d%d%d%d%d",&am,&bm,&cm,&tm,&a,&b,&c);
        if(a+b+c>=tm && a>=am && b>=bm && c>=cm)
            printf("YES\n");
        else
            printf("NO\n");
        t--;
    }
    return 0;
}
