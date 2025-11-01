// Algorithm Name Selection sort
// 4
// 5 3 2 6


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(a[i] > a[j]) // serial not ok
//             {
//                 int temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }           
//         }
//     }
//     printf("Sorted from Ascending (smallest to largest)\n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }


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

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i] < a[j]) // serial not ok
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }           
        }
    }
    printf("Sorted from Descending (largest to smallest)\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}