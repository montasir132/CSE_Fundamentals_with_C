// q1 (Say it)
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++)
//     {
//         printf("%d. I Want More Assignments\n", i);
//     }
//     return 0;
// }

// q2
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if(n>0)
//     {
//         for(int i=1; i<=n;i++)
//         {
//             printf("%d ", i);
//         }
//     }
//     else if(n<0)
//     {
//         for(int i=n; i<=0;i++)
//         {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }

// q3
// #include<stdio.h>
// int main()
// {
//     int n,odd=0;
//     scanf("%d", &n);
//     int a[n];
//     for(int i=0; i<n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for(int i=n-1; i>=0; i--)
//     {
//         if(i%2!=0)
//             printf("%d ", a[i]);
//     }
//     return 0;
// }

// q4
// #include<stdio.h>
// int main()
// {
//     int n,v,sum=0,neg=0;
//     scanf("%d", &n);
//     for(int i=0; i<n; i++)
//     {
//         scanf("%d", &v);
//         if(v>=0)
//         {
//             sum+=v;
//         }
//         else if(v<0){
//             neg+=v;
//         }
//     }
//     printf("%d %d", sum,neg);
//     return 0;
// }

//qu5

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i=0; i<n; i++)
//     {
//         scanf("%d", &a[i]);
        
//     }
//     int x, v;
//     scanf("%d %d", &x, &v);

//     a[x] = v;
//     for(int i=n-1; i>=0; i--)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }