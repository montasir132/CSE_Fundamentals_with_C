// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-08/challenges/farmers-1
#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int m1, d, m2;
        scanf("%d %d %d", &m1, &m2, &d);
        int res = (m1 * d) / (m1+m2);
        int dif = res - res;
        if (dif < .0000001)
        {
            printf("%d\n", d-(int)res);
        }
        else
        {
            printf("%d\n", d-(res + 1));
        }
    }
    return 0;
}