// #include<stdio.h>
// void fun(int n[])
// {
//     n[4]=200;
//     // printf("fun function: %p\n",n);
//     printf("fun thake print: ");
//     for(int i=0;i<5;i++)
//     {
//         printf("%d ",n[i]);
//     }
//     printf("\n");
// }
// int main()
// {
//     int n[5]={5,10,15,20,25};
//     fun(n);
//     // printf("main function: %p\n",n);

//     printf("Main thake print: ");
//     for(int i=0;i<5;i++)
//     {
//         printf("%d ",n[i]);
//     }
//     return 0;
// }



// #include<stdio.h>
// void fun(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     fun(a,n);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int ary[4]={1, 2, 3, 4};
//     printf("%d\n",*ary);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int ary[4]={1, 2, 3, 4};
    int *p;
    p=ary+3;
    *p=5;
    printf("%d\n",ary[3]);
    return 0;
}