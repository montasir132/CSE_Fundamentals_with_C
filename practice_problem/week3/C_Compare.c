#include<stdio.h>
int main()
{
    char s[21],y[21];
    scanf("%s %s",&s,&y);
    // int val=strcmp(s,y);
    // if(val<0)
    // {
    //     printf("%s", s);
    // }
    // if(val>0)
    // {
    //     printf("%s", y);
    // }
    // if(val==0)
    // {
    //     printf("%s %s", s);
    // }

    int i=0;
    while(1)
    {
        if(s[i]=='\0' && y[i]=='\0')
        {
            printf("%s", y);
            break;
        }
        else if(s[i]=='\0')
        {
            printf("%s", s);
            break;
        }
        else if(y[i]=='\0')
        {
            printf("%s", y);
            break;
        }
        else if(s[i]==y[i])
        {
            i++;
        }
        else if(s[i]<y[i])
        {
            printf("%s", s);
            break;
        }
        else if(s[i]>y[i])
        {
            printf("%s", y);
            break;
        }
    }
    return 0;
}