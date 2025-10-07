#include<stdio.h>
int main()
{
    // int n;
    // scanf("%d",&n);
    // for(int i=1; i<=n; i++)
    // {
    //     printf("%d\n",i);
    //     continue; //no poblem
    // }

    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(i==5)
        {
            continue; // skip the rest of the loop when i is 10
        }
        printf("%d\n",i);
    }
    return 0;
}