// https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-08/challenges/is-palindrome-15/problem
#include<stdio.h>
is_palindrome(char s[])
{
    int len = strlen(s);
    int l=0;
    int r=len-1;
    int palindrome = 1;
    while(l<r)
    {
        if(s[l] != s[r])
        {
            return 0;
        }
        l++,r--;
    }
    return 1;
}
int main()
{
    char s[1001];
    scanf("%s",&s);
    
    int res=is_palindrome(s);
    if(res)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}