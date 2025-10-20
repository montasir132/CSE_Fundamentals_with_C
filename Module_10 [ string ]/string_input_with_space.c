#include<stdio.h>
#include<string.h>//gets fgets kaj korla lagbe na
int main()
{
    char a[20];
    // gets(a);//enter soho input ne na
    //scanf("%s",&a);//spess input ne na
    fgets(a,14,stdin);////enter por input ne na
    printf("%s",a);
    return 0;
}