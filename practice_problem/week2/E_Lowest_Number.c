#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int mini=a[0], pos=1;
    for(int i=1;i<n; i++)
    {
        if(a[i]<mini)
        {
            mini=a[i];
            pos=i+1;
            
        }
        
    }
    printf("%d %d",mini,pos);
    return 0;
}