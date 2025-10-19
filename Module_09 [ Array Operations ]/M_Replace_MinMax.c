// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int minidx, maxidx, max=INT_MIN, mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<mini){
            mini=a[i];
            minidx=i;
        }
        if(a[i]>max){
            max=a[i];
            maxidx=i;
        }
    }
    int tmp=a[minidx];
        a[minidx]=a[maxidx];
        a[maxidx]=minidx;
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}