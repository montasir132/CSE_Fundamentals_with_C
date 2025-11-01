#include<stdio.h>
int main()
{
    int n,valu=1;
    scanf("%d",&n);
    char alpa='A';
    for(int i=1;i<=n;i++) // for printing line
    {
        for(int j=1;j<=valu;j++)  // for printing valu
        {
            printf("%c ",alpa);
        }
        printf("\n");
        alpa++;
    }
    return 0;
}