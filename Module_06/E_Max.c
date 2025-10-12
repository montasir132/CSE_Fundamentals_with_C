// E. Max https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
// #include<stdio.h>
// int main()
// {
//     int n,val, max=0;
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++)
//     {
//         scanf("%d", &val);
//         if(val>max){
//             max=val;
//         }
//     }
//     printf("%d", max);
//     return 0;
// }

//  arrak babe ex
// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int n,val, max=INT_MIN;
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++)
//     {
//         scanf("%d", &val);
//         if(val>max){
//             max=val;
//         }
//     }
//     printf("%d", max);
//     return 0;
// }

// minimam
#include<stdio.h>
#include<limits.h>
int main()
{
    int n,val, mini=INT_MAX;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &val);
        if(val<mini){
            mini=val;
        }
    }
    printf("%d", mini);
    return 0;
}