#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<15;i++)
    {
        a=i*3*a;
        b=i*2*b;
        if(a>b){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
