#include<stdio.h>
#include<string.h>
int main()
{
    char s[101],n[101];
    scanf("%s %s",&s,&n);


    // logic build

    // int len=strlen(n);
    // for(int i=0;i<=len;i++)
    // {
    //     s[i]=n[i];
    // }


    // build function

    strcpy(s,n);

    
    printf("%s %s",s ,n);
    return 0;
}