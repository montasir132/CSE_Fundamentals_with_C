// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-08/challenges/count-me-4
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000];
    scanf("%s", str);
    int fre_arr[26] = {0};
    int str_len = strlen(str);
    for (int k = 0; k < str_len; k++)
    {
        int idx = str[k] - 'a';
        fre_arr[idx]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (fre_arr[i] != 0)
        {
            printf("%c - %d\n", i + 'a', fre_arr[i]);
        }
    }
    return 0;
}