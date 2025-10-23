// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
#include<stdio.h>
#include<limits.h>
int main()
{
    int t;
    scanf("%d",&t);
    // for(int x=1;x<=t;t--)
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        
        int res=INT_MAX;//2e9//2*10^9
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                // printf("%d-%d\n",arr[i],arr[j]);
                int val = arr[i]+arr[j]+j-i;
                if(val<res)
                {
                    res=val;
                }
            }
        }
        printf("%d\n",res);
    }
    return 0;
}