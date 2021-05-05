#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    int i,cap,sm;
    i=cap=sm=0;
    scanf("%s",&s);
    while(s[i]!='\0')
    {
        if(s[i]>=65 && s[i]<=90)
            cap++;
        else if(s[i]>=97 && s[i]<=122)
            sm++;
            i++;
    }
    if(cap>sm)
        printf("%s",strupr(s));
    else if(sm>cap)
        printf("%s",strlwr(s));
    else
        printf("%s",strlwr(s));
    return 0;
}
