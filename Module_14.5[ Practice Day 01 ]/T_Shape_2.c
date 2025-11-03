// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int star=1,spes=n-1;
    for(int i=0;i<n;i++) // for printing line
    {
        for(int j=0;j<spes;j++) // for printing spes
        {
            printf(" ");
        }
        for(int j=0;j<star;j++) // for printing star
        {
            printf("*");
        }
        printf("\n");
        star+=2;
        spes--;
    }
    return 0;
}