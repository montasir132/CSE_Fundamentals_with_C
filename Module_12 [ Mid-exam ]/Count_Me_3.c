// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-08/challenges/count-me-3
#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char s[10001];
        scanf("%s",&s);
        int len=strlen(s);
        int cap=0,sml=0,digit=0; 
        for(int i=0;i<len;i++)
        {
            if(s[i]>='A' && s[i]<='Z'){
                cap++;
            }
            if(s[i]>='a' && s[i]<='z'){
                sml++;
            }
            if(s[i]>='0' && s[i]<='9'){
                digit++;
            }
        }
        printf("%d %d %d\n", cap, sml, digit);
    }
    return 0;
}