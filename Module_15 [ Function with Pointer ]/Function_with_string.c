#include<stdio.h>
#include<string.h>
void fun(char s[])
{
    printf("%s\n",s);
    printf("%d\n",strlen(s));
    
}
int main()
{
    char s[20];
    scanf("%s",s);
    fun(s);
    return 0;
}