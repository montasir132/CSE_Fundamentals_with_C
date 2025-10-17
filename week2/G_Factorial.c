// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t); 
    
    for(int i=0; i<t; i++)
    {
        long long int n;
        scanf("%lld", &n);
        long long int factor=1;
        for (int i = 2; i <= n; i++) 
        {
            factor *= i;
        }
        printf("%lld\n", factor);
    }
    
    return 0;
}