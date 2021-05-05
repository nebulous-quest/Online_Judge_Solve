#include<stdio.h>
#include<string.h>
int main()
{
    char s[]= "Sajid Hasan";
    int len=strlen(s);
    printf("length = %d",sizeof(s)/sizeof(s[0]));
    printf("\nlength= %d",len);
}
