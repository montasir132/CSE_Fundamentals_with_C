// *****
// ****
// ***
// **
// *

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n); 
    int star=n;
    for(int i=0;i<n;i++) // for printing line
    {
        for(int j=0;j<star;j++) // for printing star
        {
            printf("*");
        }
        printf("\n");
        star--;
    }
    return 0;
}