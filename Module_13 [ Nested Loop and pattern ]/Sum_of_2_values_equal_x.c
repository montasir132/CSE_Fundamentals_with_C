// Sum of 2 values equal x
// 4
// 5 3 2 6
// 9
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);

    // Flag variable
    int flag=0;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==x)
            {
                flag=1;
                printf("yes\n%d + %d = %d",a[i],a[j],x);
            }           
        }
    }
    if(flag==0)
    {
        printf("no\n");
    }
    return 0;
}