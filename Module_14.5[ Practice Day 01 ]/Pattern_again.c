// 1
// 12
// 123
// 1234
// 12345
//  1234
//   123
//    12
//     1

// https://www.hackerrank.com/contests/practice-problem-a-introduction-to-c-programming-a-batch-08/challenges
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    int spes=1;
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=spes;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
        spes++;
    }
    return 0;
}