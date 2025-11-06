// https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-08/challenges/pattern-2-21-4/problem
#include<stdio.h>
int main()
{
    int n,valu=1;
    scanf("%d",&n);

    int star=1,spes=n-1;
    for(int i=1;i<=n;i++)  // for printing line
    {
        for(int j=1;j<=spes;j++) // for printing spes
        {
            printf(" ");
        }
        for(int j=i;j>=valu;j--) // for printing star
        {
            
            printf("%d",j);
        }
        printf("\n");
        // valu++;
        spes--;
    }
    return 0;
}