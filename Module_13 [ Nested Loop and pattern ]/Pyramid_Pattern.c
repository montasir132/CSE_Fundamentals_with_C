//     *
//    ***
//   *****
//  *******
// *********
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int star=1,spes=n-1;
//     for(int i=0;i<n;i++) // for printing line
//     {
//         for(int j=0;j<spes;j++) // for printing spes
//         {
//             printf(" ");
//         }
//         for(int j=0;j<star;j++) // for printing star
//         {
//             printf("*");
//         }
//         printf("\n");
//         star+=2;
//         spes--;
//     }
//     return 0;
// }



// *********
//  *******
//   *****
//    ***
//     *
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int star=2*n-1,spes=0;
//     for(int i=n;i>=1;i--) // for printing line
//     {
//         for(int j=0;j<spes;j++) // for printing spes
//         {
//             printf(" ");
//         }
//         for(int j=0;j<star;j++) // for printing star
//         {
//             printf("*");
//         }
//         printf("\n");
//         star-=2;
//         spes++;
//     }
//     return 0;
// }



//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int star=1,spes=n-1,r_star=2*n-1,r_spes=0;
//     for(int i=0;i<n;i++)  // for printing line
//     {
//         for(int j=0;j<spes;j++) // for printing spes
//         {
//             printf(" ");
//         }
//         for(int j=0;j<star;j++) // for printing star
//         {
//             printf("*");
//         }
//         printf("\n");
//         star+=2;
//         spes--;
//     }
//     for(int i=n;i>=1;i--) // for printing line
//     {
//         for(int j=0;j<r_spes;j++) // for printing spes
//         {
//             printf(" ");
//         }
//         for(int j=0;j<r_star;j++)  // for printing star
//         {
//             printf("*");
//         }
//         printf("\n");
//         r_star-=2;
//         r_spes++;
//     }
//     return 0;
// }



//     *
//    **
//   ***
//  ****
// *****
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int star=1,spes=n-1;
//     for(int i=0;i<n;i++)  // for printing line
//     {
//         for(int j=0;j<spes;j++) // for printing spes
//         {
//             printf(" ");
//         }
//         for(int j=0;j<star;j++) // for printing star
//         {
//             printf("*");
//         }
//         printf("\n");
//         star++;
//         spes--;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     for(int i=1;i<=4;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     for(int i=1;i<=5;i+=2)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     for(int i=3;i>=1;i--)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             printf("*");
//         }
//         printf(" ");
//     }
//     return 0;
// }