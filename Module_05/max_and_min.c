// K. Max and Min https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    //Min value
    if(a<=b && a<=c)
    {
        printf("%d ", a);
    }
    else if(b<=a && b<=c)
    {
        printf("%d ", b);
    }
    else if(c<=a && c<=b)
    {
        printf("%d ", c);
    }
    //Max value
    if(a>=b && a>=c)
    {
        printf("%d", a);
    }
    else if(b>=a && b>=c)
    {
        printf("%d", b);
    }
    else if(c>=a && c>=b)
    {
        printf("%d", c);
    }
    return 0;
}

