// return+parameter

// #include<stdio.h>
// int even(int n)
// {
//     int e_num= n%2;
//     return e_num;
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int e_num=even(n);
//     if(e_num == 0)
//     {
//         printf("Even");
//     }else{
//         printf("odd");
//     }
//     return 0;
// }


// return+ no parameter

// #include<stdio.h>
// int even()
// {
//     int n;
//     scanf("%d",&n);
//     int e_num= n%2;
//     return e_num;
// }
// int main()
// {
//     int e_num=even();
//     if(e_num == 0)
//     {
//         printf("Even");
//     }else{
//         printf("odd");
//     }
//     return 0;
// }

// no return+ parameter

// #include<stdio.h>
// void Definition(int n)
// {
//     if(n%2==0)
//     {
//         printf("Even Number");
//     }
//     else{
//         printf("ODD Number");
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     Definition(n);
//     return 0;
// }


// no return+ no parameter

#include<stdio.h>
void Definition()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Even Number");
    }
    else{
        printf("ODD Number");
    }
}
int main()
{
    Definition();
    return 0;
}