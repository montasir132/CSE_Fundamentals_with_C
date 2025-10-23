// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
#include<stdio.h>
#include<string.h>
int main()
{
    char a[11],b[11];
    scanf("%s %s",&a,&b);
    int len_a =strlen(a), len_b=strlen(b);
    printf("%d %d\n",len_a,len_b);
    printf("%s%s\n", a,b);
    char tem=a[0],tmp=b[0];
    a[0]=tmp;
    b[0]=tem;
    printf("%s %s",a,b);
    return 0;
}