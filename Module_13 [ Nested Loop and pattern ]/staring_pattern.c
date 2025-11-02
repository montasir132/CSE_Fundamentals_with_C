// 5
// A
// A B
// A B C
// A B C D
// A B C D E
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) // for printing line
    {
        for(int j=1;j<=i;j++)  // for printing alpa
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}