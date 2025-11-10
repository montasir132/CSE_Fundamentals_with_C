// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A
#include<stdio.h>
print_recursun(int n,int i)
{
    if(i==n+1)
    {
        return;
    }
    printf("I love Recursion\n");
    print_recursun(n,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    print_recursun(n,1);
    return 0;
}