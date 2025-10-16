// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int ar[n],absum=0;
    for(int i=0; i<n; i++)
    {
        scanf("%lld", &ar[i]);
        
    }
    for(int i=0; i<n; i++)
    {
        absum+=ar[i];
        
    }
    if(absum<0)
        {
            printf("%lld", -absum);
        }
        else{
            printf("%lld", absum);
        }
    return 0;
}