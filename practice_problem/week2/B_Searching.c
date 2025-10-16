// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

#include<stdio.h>
int main()
{
    int n,y;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x, progison;
    scanf("%d", &x);
    progison =-1;

    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            progison=i;
            break;
        }
    }
    printf("%d", progison);
    return 0;
}