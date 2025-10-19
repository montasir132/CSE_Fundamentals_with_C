#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a[x];
    for(int i=0; i<x; i++)
    {
        scanf("%d",&a[i]);
    }
    int idx;
    scanf("%d",&idx);
    for(int i=idx;i<x-1;i++)
    {
        a[i]=a[i+1];
    }
    x--;
    for(int i=0;i<x;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}