// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
#include <stdio.h>
int main() 
{
    int th, x, y;
    scanf("%d", &th);
    for (int i = 0; i < th; i++) {
        int sum = 0;
        scanf("%d %d", &x, &y);
        if (x > y) 
        {
            for (int j = y + 1; j < x; j++)
            {
                if (j % 2 != 0) 
                {
                    sum += j;
                }
            }
        } 
        else 
        {
            for (int j = x + 1; j < y; j++) 
            {
                if (j % 2 != 0) 
                {
                    sum += j;
                }
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}