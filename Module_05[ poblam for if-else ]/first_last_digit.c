// P. First digit ! https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int first_digit= x/1000;
    if (first_digit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int last_digit= x%10;
    printf("%d", last_digit);
    return 0;
}