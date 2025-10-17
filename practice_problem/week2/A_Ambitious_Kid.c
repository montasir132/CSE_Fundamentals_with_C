// https://codeforces.com/contest/1866/problem/A

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int x;
//     int mnimam = 100000+5;
//     for(int i=1; i<=n; i++)
//     {
//         scanf("%d", &x);
//         if(x<0)
//         {
//             x= x*-1;
//         }
//         if(x<mnimam)
//         {
//             mnimam=x;
//         }
        
//     }
//     printf("%d",mnimam);
//     return 0;
// }

// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int b;
//     scanf("%d", &b);
//     int y;
//     int min= INT_MAX;
//     for(int i=1;i<=b;i++)
//     {
//         scanf("%d", &y);
//         if(y<0)
//         {
//             y*=-1;
//         }
//         if(y<min)
//         {
//             min=y;
//         }
        
//     }
//     printf("%d",min);
//     return 0;
// }

#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main()
{
    int b;
    scanf("%d", &b);
    int y;
    int min= INT_MAX;
    for(int i=1;i<=b;i++)
    {
        scanf("%d", &y);
        y=abs(y);
        if(y<min)
        {
            min=y;
        }
    }
    printf("%d",min);
    return 0;
}