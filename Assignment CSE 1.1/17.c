#include<stdio.h>
void swapNum(int *num1,int  *num2)
{
    int temp;
    temp = *num1;
    *num1= *num2;
    *num2= temp;
}
int main()
{
    int num1,num2;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&num1,&num2);
    printf("num1 = %d \nnum2 = %d",num1,num2);
    printf("\nAfter swaping");
    swapNum(&num1,&num2);
    printf("\nnum1 = %d \nnum2 = %d",num1,num2);
}
