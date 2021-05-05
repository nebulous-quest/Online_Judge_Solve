//adding tow numbers
#include<stdio.h>
int add(int *n1,int *n2)
{
    int r;
    r=*n1+*n2;
}
int main()
{
    int n1,n2,res;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&n1,&n2);
    res=add(&n1,&n2);
    printf("Result = %d",res);
}

