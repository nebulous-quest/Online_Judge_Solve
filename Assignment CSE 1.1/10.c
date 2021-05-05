#include <stdio.h>
int main ()
{
    int a[10][10],b[10][10],c[10][10],d[10][10],i,j;

    printf("Enter the first matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }

    printf("The transpose matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
           d[j][i]=a[i][j];
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",d[i][j]);
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
           c[i][j]=a[i][j] - d[i][j];
    }

    printf("Differences between main matrix and transpose matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",c[i][j]);

        printf("\n");
    }
    return 0;
}
