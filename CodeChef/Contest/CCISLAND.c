#include<stdio.h>
int main()
{
    int t,x,y,xr,yr,d;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d%d%d%d%d",&x,&y,&xr,&yr,&d);
        if(x/xr>=d && y/yr>=d)
            printf("YES\n");
        else
            printf("NO\n");
            t--;
    }
    return 0;
}
