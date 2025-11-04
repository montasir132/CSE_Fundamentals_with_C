#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int start=1,spase=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=spase;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=start;j++)
        {
            printf("*");
        }
        printf("\n");
        spase--;
        start++;
    }
    return 0;
}