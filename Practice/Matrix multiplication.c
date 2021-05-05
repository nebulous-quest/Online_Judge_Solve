#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],result[10][10],i,j,k,r1,c1,r2,c2,sum=0;
    printf("Enter row and column for a matrix : ");
    scanf("%d%d",&r1,&c1);
    printf("Enter row and column for b matrix : ");
    scanf("%d%d",&r2,&c2);
    while(c1!=r2)
    {
        printf("Error");
        printf("Enter row and column for a matrix : ");
        scanf("%d%d",&r1,&c1);
        printf("Enter row and column for b matrix : ");
        scanf("%d%d",&r2,&c2);
    }
    //input for a matrix
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //input for b matrix
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    //Matrix multiplication
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    //printing result matrix
    printf("Printing result matrix = \n");
     for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++){
            printf("%d  ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
