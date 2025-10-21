#include<stdio.h>
#include<stdbool.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",&a,&b);


    // logic build

    // int i=0;
    // while(true)
    // {
    //     if(a[i]=='\0' && b[i]=='\0')
    //     {
    //         printf("Equal");
    //         break;
    //     }
    //     else if(a[i]=='\0')
    //     {
    //         printf("a is smaller");
    //         break;
    //     }
    //     else if(b[i]=='\0')
    //     {
    //         printf("b is smaller");
    //         break;
    //     }
    //     else if(a[i]==b[i])
    //     {
    //         i++;
    //     }
    //     else if(a[i]<b[i])
    //     {
    //         printf("A is smaller");
    //         break;
    //     }
    //     else if(a[i]>b[i])
    //     {
    //         printf("B is smaller");
    //         break;
    //     }
    // }


    // build function

    // sortkat

    // printf("%d",strcmp(a,b));

    // babohar niom

    int val=strcmp(a,b);
    if(val<0)
    {
        printf("A is smaller");
    }
    else if(val==0)
    {
        printf("Equel");
    }
    else if(val>0)
    {
        printf("B is smaller");
    }
    return 0;
}