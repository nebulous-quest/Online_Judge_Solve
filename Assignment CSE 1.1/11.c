#include<stdio.h>
int qube(int rem)
{
    return rem*rem*rem;
}
int isArmstrong(int n)
{
    int rem,sum=0,temp;
    temp=n;
    while(temp!=0)
    {
        rem=temp/10;
        sum= sum+qube(rem);
        temp=temp/10;
    }
    if(n==sum)
        return 1;
    else
        return 0;

}
int main()
{
    int ll,ul,i;
    printf("Enter range ll and ul: ");
    scanf("%d%d",&ll,&ul);
    for(i=ll; i<=ul; i++)
    {
        if(isArmstrong(i))
        {
            printf("%d ",i);
        }
    }
   // return 0;
}
