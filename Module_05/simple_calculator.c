// C. Simple Calculator https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C

#include<stdio.h>
int main()
{
    long long int x,y,z;
    scanf("%lld %lld", &x, &y);
    if(x+y)
    {
        printf("%lld %c %lld %c %lld\n", x, '+', y, '=', x+y);
    }
    if(x*y)
    {
        printf("%lld %c %lld %c %lld\n", x, '*', y, '=', x*y);
    }
    if(x-y)
    {
        printf("%lld %c %lld %c %lld", x, '-', y, '=', x-y);
    }
    return 0;
}