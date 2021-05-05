#include<stdio.h>
#include<string.h>
int main()
{
    int n,a=0;
    char s[151];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",&s);
        if(s[1]=='+')
            a++;
        else
            a--;
    }
    printf("%d\n",a);
    return 0;
}
