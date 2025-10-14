// D. Fixed Password https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D
#include<stdio.h>
int main()
{
    int pass;
    while(scanf("%d", &pass) != EOF)
    // while(scanf("%d", &pass))
    {
        if(pass == 1999)
        {
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int pass;
//     For( ;scanf("%d", &pass); )
//     {
//         if(pass == 1999)
//         {
//             printf("Correct\n");
//             break;
//         }
//         else{
//             printf("Wrong\n");
//         }
//     }
    // return 0;
// }