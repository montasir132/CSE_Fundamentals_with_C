#include<stdio.h>
int main()
{
    // // even numders
    // for(int i=0; i<=100000 ; i+=2)
    // {
    //     printf("%d\n",i);
    // }

    // odd numbers
    // for(int i=1; i<=100000 ; i+=2)
    // {
    //     printf("%d\n",i);
    // }

    // multiples of 5
    // for(int i=11; i<=100 ; i+=11)
    // {
    //     printf("%d\n",i);
    // }


    // reverse order
    // for(int i=100; i>=1 ; i-=1){
    //     printf("%d\n",i);
    // }

    // for(int i=2; i<=100 ; i*=2){
    //     printf("%d\n",i);
    // }

    int n;
    scanf("%d",&n);
    for(int i=n; i<=n ; i+=2)
    {
        printf("%d\n",i);
    }
    return 0;
}