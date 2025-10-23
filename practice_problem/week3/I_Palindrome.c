// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
#include<stdio.h>
int main()
{
    char s[1001];
    scanf("%s",&s);
    int len = strlen(s);
    int l=0;
    int r=len-1;
    int palindrome = 1;
    while(l<r)
    {
        if(s[l] != s[r])
        {
            palindrome = 0;
            break;
        }
        l++,r--;
    }
    if(palindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}