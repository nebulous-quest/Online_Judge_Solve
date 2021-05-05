#include<stdio.h>
int add(int *x,int *y,int *z)
{
    int r;
    r=*x+*y+*z;
    return(r);
}
int main()
{
    int n1,n2,n3,result;
    printf("Enter Three Values: ");
    scanf("%d %d%d",&n1,&n2,&n3);
    result=add(&n1,&n2,&n3);
    printf("The Sum is: %d",result);
    return 0;
}
