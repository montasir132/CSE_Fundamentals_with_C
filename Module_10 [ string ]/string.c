#include<stdio.h>
int main()
{
    char a[8];
    for(int i=0;i<8;i++)
    {
        scanf("%c",&a[i]);
    }
    for(int i=0;i<8;i++)
    {
        printf("%c\n",a[i]);
    }
    return 0;
}