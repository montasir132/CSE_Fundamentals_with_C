// https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-08/challenges/even-and-odd-8-2/problem
#include<stdio.h>
void odd_even()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("%d %d",even,odd);
}
int main()
{
    odd_even();
    return 0;
}