#include<stdio.h>
int main()
{
    //1st array
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //2nd array
    int m;
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    // 1+2array
    int c[n+m];
    for(int i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<m;i++)
    {
        c[i+n]=b[i];
    }
    for(int i=0;i<n+m;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}