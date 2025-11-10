// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C
#include<stdio.h>
void hello(int i, int n)
{
    if(i==n+1)
    {
        return;
    }
    hello(i+1,n);
    printf("%d",i);
    if (i != 1)
    {
        printf(" ");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    hello(i,n);
    return 0;
}



// #include<stdio.h>
// void hello(int i)
// {
//     if(i==0) // Condition
//     {
//         return;
//     }
    
//     printf("%d",i);
//     if (i != 1)
//     {
//         printf(" ");
//     }
//     hello(i-1); // increment decrement
// }

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int i=n; // Initialization 
//     hello(i);
//     return 0;
// }