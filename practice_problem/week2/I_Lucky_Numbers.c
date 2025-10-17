// I. Lucky Numbers https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int digit1 = n/10;
//     int digit2 = n%10;
//     // printf("%d%d",digit1,digit2);
//     if((digit2 !=0 &&  digit1 % digit2 == 0 )||(digit1 !=0 && digit2 % digit1 == 0))
//     {
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int x;
//     scanf("%d", &x);
//     int first=x/10;
//     int last=x%10;
//     if(last==0)
//     {
//         printf("YES");
//     }
//     if(first%last==0 || last%first==0)
//     {
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int first=x/10;
    int last=x%10;
    if(last%first==0 || first%last==0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}