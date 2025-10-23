#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n>0)
    {
        for(int i=1; i<=n;i++)
        {
            printf("%d ", i);
        }
    }
    if(n<0)
    {
        for(int i=n; i<=0;i++)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n],pos=0,neg=0;
//     for(int i=0; i<n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=0; i<n; i++)
//     {
//         if(a[i]>0)
//         {
//             pos+=a[i];
//         }
//         else if(a[i]<0)
//         {
//             neg+=a[i];
//         }
        
//     }
//     printf("%d %d",pos,neg);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n; 
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int x,v;
//     scanf("%d %d",&x, &v);
//     a[x]=v;
//     for(int i=0;i<n; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int x;//search valu
//     scanf("%d",&x);
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]==x)
//         {
//             printf("%d",i);// i_th index
//             return 0;
//         }
//     }
//     printf("%d",-1);
//     return 0;
// }