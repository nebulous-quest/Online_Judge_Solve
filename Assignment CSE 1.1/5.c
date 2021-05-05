#include<stdio.h>
int r(int n);
int main()
{
    int n;
    scanf("%d",&n);
     r(n);
}
int r(int n)
{
//    static int n=x;
    if(n>0)
    {
        printf("Love you\n");
        r(n-1);
    }
    else
        return 0;
}
