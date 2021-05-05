#include<stdio.h>
int main()
{
    char s[101],temp;
    int i,j,l;

    scanf("%s",&s);

    l=strlen(s);

    for(i=0;i<l-1;i=i+2)
    {
        for(j=0;j<l-1-i;j=j+2)
        {
            if(s[j]>s[j+2])
            {
                temp=s[j+2];
                s[j+2]=s[j];
                s[j]=temp;
            }
        }
    }

    puts(s);

    return 0;
}
