// C. Replacement https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]>0)
        {
            int pos=1;
            printf("%d ",pos);

        }
        else if(a[i]==0)
        {
            printf("%d ",0);
        }
        else if(a[i]<0)
        {
            int neg=2;
            printf("%d ",neg);
        }
        
    }
    return 0;
}