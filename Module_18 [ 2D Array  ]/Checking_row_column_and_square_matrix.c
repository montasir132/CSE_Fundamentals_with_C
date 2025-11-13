
#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // Checking row matrix like [a b c]

    // if(r==1)
    // {
    //     printf("This is a row matrix");
    // }
    // else{
    //     printf("This is not a row matrix");
    // }


    // Checking column matrix like 
    // a 
    // b 
    // c

    // if(c==1)
    // {
    //     printf("This is a column matrix");
    // }
    // else{
    //     printf("This is not a column matrix");
    // }

    // Checking square matrix like 
    // a b c
    // b c d
    // c d f

    if(r==c)
    {
        printf("This is a square matrix");
    }
    else{
        printf("This is not a square matrix");
    }
    return 0;
}