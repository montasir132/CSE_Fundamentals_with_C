// *********
//  *******
//   *****
//    ***
//     *

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int star=2*n-1,spase=0;
    for(int i=n;i>=1;i--)
    {
        for(int j=0;j<spase;j++) // for printing spes
        {
            printf(" ");
        }
        for(int j=0;j<star;j++) // for printing star
        {
            printf("*");
        }
        printf("\n");
        star-=2;
        spase++;
    }
    return 0;
}
