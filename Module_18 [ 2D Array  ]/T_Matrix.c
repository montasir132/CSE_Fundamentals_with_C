#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int primary_sum=0;
    int secondary_sum=0;
    if(n==n) // square matrix
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    primary_sum+=a[i][i];
                }
                if(i+j==n-1)
                {
                    secondary_sum+=a[i][j];
                }
            }
        }
        int res=abs(primary_sum-secondary_sum);
        printf("%d",res);
    }

    else // not square matrix
    {
        printf("This is not a primary diagonal matrix");
    }

    return 0;
}