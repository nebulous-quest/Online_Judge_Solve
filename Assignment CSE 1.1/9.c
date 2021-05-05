#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter m & n : ");
    scanf("%d %d",&m,&n);
    int A[m],B[n];
    printf("A = ");
    for(int i=0;i<m;i++)
        scanf("%d",&A[i]);
        printf("B = ");
    for(int i=0;i<n;i++)
        scanf("%d",&B[i]);
    int C[m];
    int k=0;
    printf("A-B = ");
    for(int i=0;i<n;i++)
    {
        int o=0;
        for(int j=0;j<n;j++)
            if(A[i]==B[j])
            o=1;
        if(!o)
        {
            C[k]=A[i];
            k++;
        }
    }
    if(k==0) printf("-1");
    else
    {
        for(int i=0;i<k;i++)
            printf("%d \t",C[i]);
    }
    return 0;
}
