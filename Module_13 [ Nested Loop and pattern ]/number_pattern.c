// 1
// 12
// 123
// 1234
// 12345
// #include<stdio.h>
// int main()
// {
//     int n,valu=1;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++) // for printing line
//     {
//         for(int j=1;j<=valu;j++)  // for printing valu
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//         valu++;
//     }
//     return 0;
// }

//     1 
//    1 2 
//   1 2 3 
//  1 2 3 4 
// 1 2 3 4 5 
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int valu=1,spes=n-1;
//     for(int i=1;i<=n;i++)  // for printing line
//     {
//         for(int j=1;j<=spes;j++) // for printing spes
//         {
//             printf(" ");
//         }
//         for(int j=1;j<=valu;j++) // for printing valu
//         { 
//             printf("%d ",j);
//         }
//         printf("\n");
//         valu++;
//         spes--;
//     }
//     return 0;
// }

// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int valu=n;
//     for(int i=1;i<=n;i++) // for printing line
//     {
//         for(int j=1;j<=valu;j++)  // for printing valu
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//         valu--;
//     }
//     return 0;
// }

//     1
//    123
//   12345
//  1234567
// 123456789
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int valu=1,spes=n-1;
//     for(int i=1;i<=n;i++) // for printing line
//     {
//         for(int j=1;j<=spes;j++) // for printing spes
//         {
//             printf(" ");
//         }
//         for(int j=1;j<=valu;j++) // for printing valu
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//         valu+=2;
//         spes--;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     for(int i=1;i<=3;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             printf("%d ",j);
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     for(int i=1;i<=3;i++)
//     {
//         for(int j=1;j<=3;j++)
//         {
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int num=1;
//     for(int i=1;i<=3;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             printf("%d ",num++);
//         }
//         printf("\n");
//     }
//     return 0;
// }

